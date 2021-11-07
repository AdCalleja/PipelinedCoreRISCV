module IDEXRegs(
    input clk,
    input rst,
    input en,
    //Inputs
    input [31:0]    writePC,     //32 or 64 bits
    input [31:0]    writeRS1,
    input [31:0]    writeRS2,
    input [31:0]    writeImmediate,
    input [31:0]    writeInstruction,
    input [4:0]     writeWriteDir,
    input           writeRegWrite,
    input           writeMemToReg,
    input           writeBranch,
    input           writeMemWrite,
    input           writeMemRead,
    input           writeALUSrc,
    input [4:0]     writeALUCtrl,
    input [4:0]     writeReadDir1,
    input [4:0]     writeReadDir2,
    //Outputs
    output [31:0]   readPC,     //32 or 64 bits
    output [31:0]   readRS1,
    output [31:0]   readRS2,
    output [31:0]   readImmediate,
    output [31:0]   readInstruction,
    output [4:0]    readWriteDir,
    output          readRegWrite,
    output          readMemToReg,
    output          readBranch,
    output          readMemWrite,
    output          readMemRead,
    output          readALUSrc,
    output [4:0]    readALUCtrl,
    output [4:0]    readReadDir1,
    output [4:0]    readReadDir2
);

// Datapath
reg [31:0]  regPC;
reg [31:0]  regRS1;
reg [31:0]  regRS2;
reg [31:0]  regImmediate;
reg [31:0]  regInstruction;
reg [4:0]   regWriteDir;

// Control
//To WB
reg regRegWrite;
reg regMemToReg;
//To MEM
reg regBranch;
reg regMemWrite;
reg regMemRead;
//To EX
reg regALUSrc;
reg [4:0] regALUCtrl;

// Forwarding
reg [4:0]   regReadDir1;
reg [4:0]   regReadDir2;

always @(posedge clk) begin : WriteRegs
    if (rst == 0) begin
        if (en == 1) begin
            regPC <= writePC;
            regRS1 <= writeRS1;
            regRS2 <= writeRS2;
            regImmediate <= writeImmediate;
            regInstruction <= writeInstruction;
            regWriteDir <= writeWriteDir;
            regRegWrite <= writeRegWrite;
            regMemToReg <= writeMemToReg;
            regBranch <= writeBranch;
            regMemWrite <= writeMemWrite;
            regMemRead <= writeMemRead;
            regALUSrc <= writeALUSrc;
            regALUCtrl <= writeALUCtrl;
            regReadDir1 <= writeReadDir1;
            regReadDir2 <= writeReadDir2;
        end
    end else begin
        regPC <= 0;
        regRS1 <= 0;
        regRS2 <= 0;
        regImmediate <= 0;
        regInstruction <= 0;
        regWriteDir <= 0;
        regRegWrite <= 0;
        regMemToReg <= 0;
        regBranch <= 0;
        regMemWrite <= 0;
        regMemRead <= 0;
        regALUSrc <= 0;
        regALUCtrl <= 0;
        regReadDir1 <= 0;
        regReadDir2 <= 0;
    end
end

assign readPC = regPC;
assign readRS1 = regRS1;
assign readRS2 = regRS2;
assign readImmediate = regImmediate;
assign readInstruction = regInstruction;
assign readWriteDir = regWriteDir;
assign readRegWrite = regRegWrite;
assign readMemToReg = regMemToReg;
assign readBranch = regBranch;
assign readMemWrite = regMemWrite;
assign readMemRead = regMemRead;
assign readALUSrc = regALUSrc;
assign readALUCtrl = regALUCtrl;
assign readReadDir1 = regReadDir1;
assign readReadDir2 = regReadDir2;



endmodule
