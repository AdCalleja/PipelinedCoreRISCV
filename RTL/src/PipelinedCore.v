`include "TextMemory.v"
`include "MainControl.v"
`include "RegisterFile.v"
`include "ImmGen.v"
`include "HazardDetection.v"
`include "Forwarding.v"
`include "ALU.v"
`include "DataMemory.v"
`include "IFIDRegs.v"
`include "IDEXRegs.v"
`include "EXMEMRegs.v"
`include "MEMWBRegs.v"

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

//Clock source
wire clk;

`ifdef BUTTON
    Debouncer DebouncerSSC(.clk(original_clk), .btn(btn), .btn_out(clk));
`elsif SLOWCLK
     SlowClock SlowClockSCC(.clk(original_clk), .slow_clk(clk));
`else
    assign clk = original_clk;
`endif

//PARAMETERS

// ----- DATAPATH WIRES -----
// --- IF stage
wire [31:0] Instruction;    //! Instruction obtained from Text Memory for a given PC.
wire [31:0] PCPlus4;        //! PC + 4. Common case.
wire [31:0] PCBranch;       //! PC + B Immediate.
wire [31:0] PCNext;         //! Next PC value. Selected from PCPlus4 or PCBranch.

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
wire [31:0] EXReadData1;
wire [31:0] EXReadData2;
wire [31:0] EXImmediate;
wire [4:0]  EXRs1;
wire [4:0]  EXRs2;
wire [4:0]  EXRd;
wire [31:0] ALUA;
wire [31:0] ALUB;
wire [31:0] ALUOutput;      //! ALU output for a given operation.
//wire        ALUBranch;    //Not used, replaced by BranchALUOutput of BranchALU Unit  //! Direct 0 result from ALU.


// --- MEM stage
wire [31:0] MEMALUOutput;
wire [31:0] MEMReadData2;
wire [31:0] MEMWriteData;   //(Coming directly from the ALU, ignores DATAMEMORY)
wire [4:0] MEMRd;
wire [31:0] DataOutput;     //! Data Memory output.

// --- WB stage
wire [31:0] WBALUOutput;
wire [31:0] WBDataOutput;
wire [31:0] WriteData;
wire [4:0] WBRd;


// ----- CONTROL WIRES -----
// --- IF stage
wire PCSrc;
wire PCWrite;

// --- ID stage
//PipeReg
wire IFIDWrite;
wire IFIDFlush;
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
wire MemWriteIDtoStall;
wire RegWriteID;
wire MemtoRegID;
wire BranchID;
wire MemWriteID;
wire MemReadID;
wire ALUSrcID;
wire [4:0] ALUCtrlID;

// --- EX stage
//Forwarding
wire [1:0]  ForwardALUA;
wire [1:0]  ForwardALUB;
//MainControl
wire RegWriteEX;
wire MemtoRegEX;
//wire BranchEX;
wire MemWriteEX;
wire MemReadEX;
wire ALUSrc;    //! Select the source to ALU input ***b*** between **RegisterFile / Immediate**
wire [4:0] ALUCtrl;

// --- MEM stage
//MainControl
wire RegWriteMEM;
wire MemtoRegMEM;
//wire Branch;  //Branch not delayed more than BranchID //! Select new branching program counter (if ALU also sets zero lane)
wire MemWrite;              //! Enable Data Memory write
wire MemRead;               //! Enable Data Memory read

// --- WB stage
//MainControl
wire RegWrite;              //! Enable Register File WriteEn
wire MemtoReg;              //! Select the source to Register File WriteData between **ALU Result / Data Memory**

            

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
assign PCNext = (PCSrc) ? PCBranch : PCPlus4;


// TEXT MEMORY
//#(.ADDR_WIDTH(8)) 
TextMemory TextMemorySCC(
    .addr(PC[9:2]), 
    .data_out(Instruction)
);

assign IFIDRst = rst | IFIDFlush;
IFIDRegs IFIDRegsPPC(
    .clk(clk),
    .rst(IFIDRst),
    .en(IFIDWrite),
    .writePC(PC),
    .writeInstruction(Instruction),
    .readPC(IDPC),
    .readInstruction(IDInstruction)
);

//  ----- PIPELINE ID -----

assign Rs1 = IDInstruction[19:15];
assign Rs2 = IDInstruction[24:20];
assign Rd = Instruction[11:7]; 

MainControl MainControlPPC(
    .Instruction(IDInstruction), 
    .RegWrite(RegWriteIDtoStall), 
    .MemtoReg(MemtoRegID), 
    .Branch(BranchID), 
    .MemWrite(MemWriteIDtoStall),
    .MemRead(MemReadID), 
    .ALUSrc(ALUSrcID), 
    .ALUCtrl(ALUCtrlID)
);

assign RegWriteID = Stall ? 0 : RegWriteIDtoStall;
assign MemWriteID = Stall ? 0 : MemWriteIDtoStall;
assign PCBranch = IDPC + Immediate;

RegisterFile RegisterFilePPC(
    .clk(clk), 
    .rst(rst), 
    .WriteDir(IDInstruction[11:7]), 
    .WriteEn(RegWrite), 
    .WriteData(WriteData), 
    .ReadDir1(Rs1), 
    .ReadDir2(Rs2), 
    .ReadData1(ReadData1), 
    .ReadData2(ReadData2)
);

ImmGen ImmGenSCC(
    .Instruction(IDInstruction), 
    .Immediate(Immediate)
);

HazardDetection HazardDetectionPPC(
    .Instruction(IDInstruction),
    .MemReadID(MemReadID),
    .MemReadEX(MemReadEX),
    .BranchID(BranchID),
    .EXRd(EXRd),
    .PCSrc(PCSrc),
    .PCWrite(PCWrite),
    .IFIDWrite(IFIDWrite),
    .Stall(Stall),
    .IFIDFlush(IFIDFlush)
);

Forwarding ForwardingToBranchALUPPC(
    .Rs1(Rs1),
    .Rs2(Rs2),
    .MEMRd(MEMRd),
    .WBRd(WBRd),
    .RegWriteMEM(RegWriteMEM),
    .RegWrite(RegWrite),
    .ALUSrc(ALUSrc),
    .ForwardA(ForwardBranchA),
    .ForwardB(ForwardBranchB)
);
assign BranchA = ForwardBranchA[1] ? (ForwardBranchA[0] ? 0 : WriteData) : (ForwardBranchA[0] ? MEMWriteData : ReadData1);
assign BranchB = ForwardBranchB[1] ? (ForwardBranchB[0] ? 0 : WriteData) : (ForwardBranchA[0] ? MEMWriteData : ReadData2);

BranchALU BranchALUPPC(
    .a(BranchA),
    .b(BranchB),
    .ALUCtrl(ALUCtrlID),
    .BranchALUOutput(BranchALUOutput)
);

assign PCSrc = BranchALUOutput & BranchID;

IDEXRegs IDEXRegsPPC(
    .clk(clk),
    .rst(rst),
    .en(1),
    //Inputs
    //.writePC(PC), Not used, moved to ID Stage
    .writeReadData1(ReadData1),
    .writeReadData2(ReadData2),
    .writeImmediate(Immediate),
    //.writeInstruction(IDInstruction),  //Not used
    .writeRs1(Rs1),
    .writeRs2(Rs2),
    .writeRd(Rd),
    .writeRegWrite(RegWriteID),
    .writeMemtoReg(MemtoRegID),
    //.writeBranch(BranchID),       //Branch not delayed more than BranchID
    .writeMemWrite(MemWriteID),
    .writeMemRead(MemReadID),
    .writeALUSrc(ALUSrcID),
    .writeALUCtrl(ALUCtrlID),
    //Outputs
    //.readPC(),
    .readReadData1(EXReadData1),
    .readReadData2(EXReadData2),
    .readImmediate(EXImmediate),
    //.readInstruction(),
    .readRs1(EXRs1),
    .readRs2(EXRs2),
    .readRd(EXRd),
    .readRegWrite(RegWriteEX),
    .readMemtoReg(MemtoRegEX),
    //.readBranch(BranchEX),        //Branch not delayed more than BranchID
    .readMemWrite(MemWriteEX),
    .readMemRead(MemReadEX),
    .readALUSrc(ALUSrc),
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
    .ALUSrc(ALUSrc),
    .ForwardA(ForwardALUA),
    .ForwardB(ForwardALUB)
);
assign ALUA = ForwardALUA[1] ? (ForwardALUA[0] ? 0 : WriteData) : (ForwardALUA[0] ? MEMWriteData : EXReadData1);
assign ALUB = ForwardALUB[1] ? (ForwardALUB[0] ? EXImmediate : WriteData) : (ForwardALUA[0] ? MEMWriteData : EXReadData2);

EXMEMRegs EXMEMRegsPPC(
    .clk(clk),
    .rst(rst),
    .en(1),
    //Inputs
    //.writePCBranch(), //Not used
    //.writeZero(), //Not used
    .writeALUOutput(ALUOutput),
    .writeReadData2(EXReadData2),
    .writeRd(EXRd),
    .writeRegWrite(RegWriteEX),
    .writeMemtoReg(MemtoRegEX),
    //.writeBranch(BranchEX),       //Branch not delayed more than BranchID
    .writeMemWrite(MemWriteEX),
    .writeMemRead(MemReadEX),

    //Outputs
    //.readPCBranch(),
    //.readZero(),
    .readALUOutput(MEMALUOutput),
    .readReadData2(MEMReadData2),
    .readRd(MEMRd),
    .readRegWrite(RegWriteMEM),
    .readMemtoReg(MemtoRegMEM),
    //.readBranch(Branch),          //Branch not delayed more than BranchID
    .readMemWrite(MemWrite),
    .readMemRead(MemRead)
);

//  ----- PIPELINE MEM -----
assign MEMWriteData = MEMALUOutput; //For forwarding, MEMWriteData corresponds to ALUOutput in the MEM stage. 

DataMemory DataMemorySCC(
    .clk(clk),
    .data_in(MEMReadData2),
    .addr(MEMALUOutput[5:2]),
    .we(MemWrite),
    .re(MemRead),
    .data_out(DataOutput)
);

MEMWBRegs MEMWBRegsPPC(
    .clk(clk),
    .rst(rst),
    .en(1),
    //Inputs
    .writeALUOutput(MEMALUOutput),
    .writeDataOutput(DataOutput),
    .writeRd(MEMRd),
    .writeRegWrite(RegWriteMEM),
    .writeMemtoReg(MemtoRegMEM),
    //Outputs
    .readALUOutput(WBALUOutput),
    .readDataOutput(WBDataOutput),
    .readRd(WBRd),
    .readRegWrite(RegWrite),
    .readMemtoReg(MemtoReg)
);
assign WriteData = MemtoReg ? WBDataOutput : WBALUOutput;

assign leds[0] = WriteData[0] | WriteData[8] | WriteData[16] | WriteData[24]; 
assign leds[1] = WriteData[1] | WriteData[9] | WriteData[17] | WriteData[25];
assign leds[2] = WriteData[2] | WriteData[10] | WriteData[18] | WriteData[26];
assign leds[3] = WriteData[3] | WriteData[11] | WriteData[19] | WriteData[27];
assign leds[4] = WriteData[4] | WriteData[12] | WriteData[20] | WriteData[28];
assign leds[5] = WriteData[5] | WriteData[13] | WriteData[21] | WriteData[29];
assign leds[6] = WriteData[6] | WriteData[14] | WriteData[22] | WriteData[30];
assign leds[7] = WriteData[7] | WriteData[15] | WriteData[23] | WriteData[31];



endmodule
