`include "TextMemory.v"
`include "MainControl.v"
`include "RegisterFile.v"
`include "BranchALU.v"
`include "ImmGen.v"
`include "HazardDetection.v"
`include "Forwarding.v"
`include "ALU.v"
`include "DataMemory.v"
`include "IFIDRegs.v"
`include "IDEXRegs.v"
`include "EXMEMRegs.v"
`include "MEMWBRegs.v"
`include "StoreLogic.v"
`include "LoadLogic.v"
//-I/home/adrian/codigo/RISC-V/PipelinedCoreRISCV/RTL/src

//`define BUTTON = 1
//`define SLOWCLK = 1
//Debouncer
`ifdef BUTTON
    `include "Debouncer.v"
`endif
//SlowClock
`ifdef SLOWCLK
    `include "SlowClock.v"
`endif

module PipelinedCore(
    input   original_clk,
    input   rst,
`ifdef BUTTON
    input   btn,
`endif
    output [7:0] leds     //! Onboard Leds to Debug.
);

// ----- PARAMETERS -----
//parameter DATA_DATA_WITH = 8;
parameter DATA_ADDR_WIDTH = 14; 
//Max addr width 14 -> [7:0]4*4096 
//[1:0] select Byte from 0 to 3
//[13:2] 2**12 Select 1 of 4096 dirs


// ----- CLOCK -----
wire clk;

`ifdef BUTTON
    Debouncer DebouncerPPC(.clk(original_clk), .btn(btn), .btn_out(clk));
`elsif SLOWCLK
     SlowClock SlowClockPPC(.clk(original_clk), .slow_clk(clk));
`else
    assign clk = original_clk;
`endif

// ----- DATAPATH WIRES -----
// --- IF stage
wire [31:0] Instruction;    //! Instruction obtained from Text Memory for a given PC.
wire [31:0] PCPlus4;        //! PC + 4. Common case.
wire [31:0] PCTargetAddress;         //! PC + (B or Jal Immediate or Jalr ReadData1).
wire [31:0] PCNext;         //! Next PC value. Selected from PCPlus4 or PCTargetAddress.

// --- ID stage
wire [31:0] IDPC;
wire [31:0] IDInstruction;
//Register File
wire [4:0] Rs1;            //! Data for register source 1. From Register File.
wire [4:0] Rs2;            //! Data for register source 2. From Register File / Immediate.
wire [4:0] Rd;
wire [31:0] ReadData1;      //! Data from Register file 1.
wire [31:0] ReadData2;      //! Data from Register file 2.
wire [31:0] Immediate;      //! Immediate value generated.

// --- EX stage
wire [31:0] EXPC;
wire [31:0] EXReadData1;
wire [31:0] EXReadData2;
wire [31:0] EXImmediate;
wire [4:0]  EXRs1;
wire [4:0]  EXRs2;
wire [4:0]  EXRd;
wire [31:0] ALUA;
wire [31:0] ReadData1Forw;
wire [31:0] ReadData2Forw;
wire [31:0] ALUB;
wire [31:0] ALUOutput;      //! ALU output for a given operation.
//wire        ALUBranch;    //Not used, replaced by BranchALUOutput of BranchALU Unit  //! Direct 0 result from ALU.
//DEBUG
`ifdef DEBUGINSTRUCTION
    wire [31:0] EXInstruction;
`endif

// --- MEM stage
wire [31:0] MEMPC;
wire [31:0] MEMALUOutput;
wire [31:0] MEMReadData2Forw;
wire [31:0] MEMWriteData;   // == MEMALUOutput (WriteData but coming directly from the ALU (MEM), ignores DATAMEMORY) =
wire [4:0] MEMRd;
wire [3:0] MemoryByteSel;
wire [31:0] StoreFixed;
wire [31:0] LoadToFix;
wire [31:0] DataOutput;     //! Data Memory output.
`ifdef DEBUGINSTRUCTION
    wire [31:0] MEMInstruction;
`endif

// --- WB stage
wire [31:0] WBPC;
wire [31:0] WBALUOutput;
wire [31:0] WBDataOutput;
wire [31:0] WriteData;
wire [4:0] WBRd;
`ifdef DEBUGINSTRUCTION
    wire [31:0] WBInstruction;
`endif


// ----- CONTROL WIRES -----

// --- IF stage
wire PCSrc;
wire PCSrcBranch;
wire PCWrite;

// --- ID stage
//PipeReg
wire IFIDWrite;
wire IFIDFlush;
wire IFIDFlushtoStall;
//Hazard
wire IFIDRst;
wire Stall;
//Forwarding
wire [1:0] ForwardBranchA;
wire [1:0] ForwardBranchB;
wire BranchALUOutput;
wire [31:0] BranchA;
wire [31:0] BranchB;
//MainControl
wire RegWriteIDtoStall;
wire RegWriteID;
wire [1:0] WriteDataSrcID;
wire [2:0] StoreLoadSelID;
wire MemWriteIDtoStall;
wire MemWriteID;
wire MemReadID;
wire ALUSrcID;
wire PCJumpSrc;
wire [1:0] LuiAuipcSelID;
wire DoBranch;
wire [4:0] ALUCtrlID;

// --- EX stage
//Forwarding
wire [1:0]  ForwardALUA;
wire [1:0]  ForwardALUB;
//MainControl
wire RegWriteEX;
wire [1:0] WriteDataSrcEX;
wire [2:0] StoreLoadSelEX;
wire MemWriteEX;
wire MemReadEX;
wire ALUSrc;    //! Select the source to ALU input ***b*** between **RegisterFile / Immediate**
wire [1:0] LuiAuipcSel;
wire [4:0] ALUCtrl;

// --- MEM stage
//MainControl
wire RegWriteMEM;
wire [1:0] WriteDataSrcMEM;
wire [2:0] StoreLoadSel;
wire MemWrite;              //! Enable Data Memory write
wire MemRead;               //! Enable Data Memory read

// --- WB stage
//MainControl
wire RegWrite;              //! Enable Register File WriteEn
wire [1:0] WriteDataSrc;              //! Select the source to Register File WriteData between **ALU Result / Data Memory**

            

//  ----- PIPELINE IF -----

//PROGRAM COUNTER
wire [31:0] PC;
reg [31:0]  PCtemp;    //! Internal memory state of the register.
//! Update Program counter with the PCNext value.
always @(posedge clk) begin : ProgramCounter
    if (rst == 0) begin
        if (PCWrite == 1) begin
            PCtemp <= PCNext;
        end
    end
    else begin
        PCtemp <= 0;
    end   
end
assign PC = PCtemp;
// Next PC - Branch Control
assign PCPlus4 = PC + 4;
assign PCSrc = WriteDataSrcID[1] | PCSrcBranch;
assign PCNext = (PCSrc) ? {PCTargetAddress[31:1],1'b0} : PCPlus4;


// TEXT MEMORY
//#(.ADDR_WIDTH(8)) 
TextMemory TextMemoryPPC(
    .addr(PC[9:2]), 
    .data_out(Instruction)
);

assign IFIDRst = rst | IFIDFlush;
//assign IFIDFlush = IFIDFlushtoStall;
assign IFIDFlush = Stall ? 0 : IFIDFlushtoStall;  //Stalling + flushing lead to not-stall ID reg and yes PC counter
IFIDRegs IFIDRegsPPC(
    .clk(clk),
    .rst(IFIDRst),
    .en(IFIDWrite),
    //Inputs
    .writePC(PC),
    .writeInstruction(Instruction),
    //Outputs
    .readPC(IDPC),
    .readInstruction(IDInstruction)
);

//  ----- PIPELINE ID -----

assign Rs1 = IDInstruction[19:15];
assign Rs2 = IDInstruction[24:20];
assign Rd = IDInstruction[11:7]; 

MainControl MainControlPPC(
    .Instruction(IDInstruction), 
    .RegWrite(RegWriteIDtoStall), 
    .WriteDataSrc(WriteDataSrcID), 
    .StoreLoadSel(StoreLoadSelID),
    .MemWrite(MemWriteIDtoStall),
    .MemRead(MemReadID), 
    .ALUSrc(ALUSrcID),
    .PCJumpSrc(PCJumpSrc),
    .LuiAuipcSel(LuiAuipcSelID),
    .DoBranch(DoBranch), 
    .ALUCtrl(ALUCtrlID)
);

assign RegWriteID = Stall ? 0 : RegWriteIDtoStall;
assign MemWriteID = Stall ? 0 : MemWriteIDtoStall;
assign PCTargetAddress = (PCJumpSrc ? ReadData1 : IDPC) + Immediate;

RegisterFile RegisterFilePPC(
    .clk(clk), 
    .rst(rst), 
    .Rd(WBRd), 
    .WriteEn(RegWrite), 
    .WriteData(WriteData), 
    .Rs1(Rs1), 
    .Rs2(Rs2), 
    .ReadData1(ReadData1), 
    .ReadData2(ReadData2)
);

ImmGen ImmGenPPC(
    .Instruction(IDInstruction), 
    .Immediate(Immediate)
);

HazardDetection HazardDetectionPPC(
    .Instruction(IDInstruction),
    .MemReadEX(MemReadEX),
    .RegWriteEX(RegWriteEX),
    .MemRead(MemRead),
    .EXRd(EXRd),
    .MEMRd(MEMRd),
    .DoBranch(DoBranch),
    .PCSrc(PCSrc),
    .PCWrite(PCWrite),
    .IFIDWrite(IFIDWrite),
    .Stall(Stall),
    .IFIDFlush(IFIDFlushtoStall)
);

Forwarding ForwardingToBranchALUPPC(
    .Rs1(Rs1),
    .Rs2(Rs2),
    .MEMRd(MEMRd),
    .WBRd(WBRd),
    .RegWriteMEM(RegWriteMEM),
    .RegWrite(RegWrite),
    .ForwardA(ForwardBranchA),
    .ForwardB(ForwardBranchB)
);
assign BranchA = ForwardBranchA[1] ? (ForwardBranchA[0] ? 0 : WriteData) : (ForwardBranchA[0] ? MEMWriteData : ReadData1);
assign BranchB = ForwardBranchB[1] ? (ForwardBranchB[0] ? 0 : WriteData) : (ForwardBranchB[0] ? MEMWriteData : ReadData2);

BranchALU BranchALUPPC(
    .a(BranchA),
    .b(BranchB),
    .ALUCtrl(ALUCtrlID),
    .BranchALUOutput(BranchALUOutput)
);

assign PCSrcBranch = BranchALUOutput & DoBranch;

IDEXRegs IDEXRegsPPC(
    .clk(clk),
    .rst(rst),
    .en(1'b1),
    //INPUTS
    .writePC(IDPC),
    .writeReadData1(ReadData1),
    .writeReadData2(ReadData2),
    .writeImmediate(Immediate),
    .writeRs1(Rs1),
    .writeRs2(Rs2),
    .writeRd(Rd),
    .writeRegWrite(RegWriteID),
    .writeWriteDataSrc(WriteDataSrcID),
    .writeStoreLoadSel(StoreLoadSelID),
    .writeMemWrite(MemWriteID),
    .writeMemRead(MemReadID),
    .writeALUSrc(ALUSrcID),
    .writeLuiAuipcSel(LuiAuipcSelID),
    .writeALUCtrl(ALUCtrlID),
    //DEBUG
    `ifdef DEBUGINSTRUCTION
        .writeInstruction(IDInstruction),
        .readInstruction(EXInstruction),
    `endif
    //OUTPUTS
    .readPC(EXPC),
    .readReadData1(EXReadData1),
    .readReadData2(EXReadData2),
    .readImmediate(EXImmediate),
    .readRs1(EXRs1),
    .readRs2(EXRs2),
    .readRd(EXRd),
    .readRegWrite(RegWriteEX),
    .readWriteDataSrc(WriteDataSrcEX),
    .readStoreLoadSel(StoreLoadSelEX),
    .readMemWrite(MemWriteEX),
    .readMemRead(MemReadEX),
    .readALUSrc(ALUSrc),
    .readLuiAuipcSel(LuiAuipcSel),
    .readALUCtrl(ALUCtrl)
);


//  ----- PIPELINE EX -----
ALU ALUPPC(
    .a(ALUA),
    .b(ALUB),
    .ALUCtrl(ALUCtrl),
    .ALUOutput(ALUOutput)
);

Forwarding ForwardingToALUPPC(
    .Rs1(EXRs1),
    .Rs2(EXRs2),
    .MEMRd(MEMRd),
    .WBRd(WBRd),
    .RegWriteMEM(RegWriteMEM),
    .RegWrite(RegWrite),
    .ForwardA(ForwardALUA),
    .ForwardB(ForwardALUB)
);

assign ReadData1Forw = ForwardALUA[1] ? (ForwardALUA[0] ? 0 : WriteData) : (ForwardALUA[0] ? MEMWriteData : EXReadData1);
assign ALUA = LuiAuipcSel[1] ? (LuiAuipcSel[0] ? 0 : EXPC) : (LuiAuipcSel[0] ? 0 : ReadData1Forw);
assign ReadData2Forw = ForwardALUB[1] ? (ForwardALUB[0] ? 0 : WriteData) : (ForwardALUB[0] ? MEMWriteData : EXReadData2);
assign ALUB = ALUSrc ? EXImmediate : ReadData2Forw;

EXMEMRegs EXMEMRegsPPC(
    .clk(clk),
    .rst(rst),
    .en(1'b1),
    //INPUTS
    .writePC(EXPC), //Not used
    //.writeZero(), //Not used
    .writeALUOutput(ALUOutput),
    .writeReadData2Forw(ReadData2Forw),
    .writeRd(EXRd),
    .writeRegWrite(RegWriteEX),
    .writeWriteDataSrc(WriteDataSrcEX),
    .writeStoreLoadSel(StoreLoadSelEX),
    .writeMemWrite(MemWriteEX),
    .writeMemRead(MemReadEX),
    //DEBUG
    `ifdef DEBUGINSTRUCTION
        .writeInstruction(EXInstruction),
        .readInstruction(MEMInstruction),
    `endif
    //OUTPUTS
    .readPC(MEMPC),
    //.readZero(),
    .readALUOutput(MEMALUOutput),
    .readReadData2Forw(MEMReadData2Forw),
    .readRd(MEMRd),
    .readRegWrite(RegWriteMEM),
    .readWriteDataSrc(WriteDataSrcMEM),
    .readStoreLoadSel(StoreLoadSel),
    .readMemWrite(MemWrite),
    .readMemRead(MemRead)
);

//  ----- PIPELINE MEM -----
assign MEMWriteData = MEMALUOutput; //For forwarding, MEMWriteData corresponds to ALUOutput in the MEM stage. 

 

StoreLogic StoreLogicPPC(
    .Data(MEMReadData2Forw),
    .ALUOutput(MEMALUOutput[1:0]),
    .DataType(StoreLoadSel[1:0]),
    .FixedData(StoreFixed),
    .MemoryByteSel(MemoryByteSel)
);

DataMemory #(
    .ADDR_WIDTH(DATA_ADDR_WIDTH)
)DataMemoryPPC(
    .clk(clk),
    .data_in(StoreFixed),
    .addr(MEMALUOutput[DATA_ADDR_WIDTH-1:2]), //MEMALUOutput[5:2]
    .we(MemWrite),
    .re(MemRead),
    .MemoryByteSel(MemoryByteSel),
    .data_out(LoadToFix)
);

LoadLogic LoadLogicPPC(
    .Data(LoadToFix),
    .ALUOutput(MEMALUOutput[1:0]),
    .DataType(StoreLoadSel[1:0]),
    .Unsigned(StoreLoadSel[2]),
    .FixedData(DataOutput)
);

MEMWBRegs MEMWBRegsPPC(
    .clk(clk),
    .rst(rst),
    .en(1'b1),
    //INPUTS
    .writePC(MEMPC),
    .writeALUOutput(MEMALUOutput),
    .writeDataOutput(DataOutput),
    .writeRd(MEMRd),
    .writeRegWrite(RegWriteMEM),
    .writeWriteDataSrc(WriteDataSrcMEM),
    //DEBUG
    `ifdef DEBUGINSTRUCTION
        .writeInstruction(MEMInstruction),
        .readInstruction(WBInstruction),
    `endif
    //OUTPUTS
    .readPC(WBPC),
    .readALUOutput(WBALUOutput),
    .readDataOutput(WBDataOutput),
    .readRd(WBRd),
    .readRegWrite(RegWrite),
    .readWriteDataSrc(WriteDataSrc)
);
/*
WBPCPlus4 calculated "inline". 
ID needs PC, WB needs PCPlus4.
WBPlus4 could be get in other ways such as by passing it from IF to WB (besides from PC to ID)
*/
assign WriteData = WriteDataSrc[1] ? (WriteDataSrc[0] ? 0 : (WBPC+4)) : (WriteDataSrc[0] ? WBDataOutput : WBALUOutput);

assign leds[0] = WriteData[0] | WriteData[8] | WriteData[16] | WriteData[24]; 
assign leds[1] = WriteData[1] | WriteData[9] | WriteData[17] | WriteData[25];
assign leds[2] = WriteData[2] | WriteData[10] | WriteData[18] | WriteData[26];
assign leds[3] = WriteData[3] | WriteData[11] | WriteData[19] | WriteData[27];
assign leds[4] = WriteData[4] | WriteData[12] | WriteData[20] | WriteData[28];
assign leds[5] = WriteData[5] | WriteData[13] | WriteData[21] | WriteData[29];
assign leds[6] = WriteData[6] | WriteData[14] | WriteData[22] | WriteData[30];
assign leds[7] = WriteData[7] | WriteData[15] | WriteData[23] | WriteData[31];



endmodule
