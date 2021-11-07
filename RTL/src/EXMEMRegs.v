module EXMEMRegs(
    input clk,
    input rst,
    input en,
    //Inputs
    input [31:0]    writePCBranch,
    input           writeZero,
    input [31:0]    writeALUOutput,
    input [31:0]    writeRS2,
    input [4:0]     writeWriteDir,
    input           writeRegWrite,
    input           writeMemToReg,
    input           writeBranch,
    input           writeMemWrite,
    input           writeMemRead,

    //Outputs
    output [31:0]   readPCBranch,
    output          readZero,
    output [31:0]   readALUOutput,
    output [31:0]   readRS2,
    output [4:0]    readWriteDir,
    output          readRegWrite,
    output          readMemToReg,
    output          readBranch,
    output          readMemWrite,
    output          readMemRead
);
// Datapath
reg [31:0]   regPCBranch;
reg          regZero;
reg [31:0]   regALUOutput;
reg [31:0]   regRS2;
reg [4:0]    regWriteDir;
// Control
//To WB
reg regRegWrite;
reg regMemToReg;
//To MEM
reg regBranch;
reg regMemWrite;
reg regMemRead;

always @(posedge clk) begin : WriteRegs
    if (rst == 0) begin
        if (en == 1) begin
            regPCBranch <= writePCBranch;
            regZero <= writeZero;
            regALUOutput <= writeALUOutput;
            regRS2 <= writeRS2;
            regWriteDir <= writeWriteDir;
            regRegWrite <= writeRegWrite;
            regMemToReg <= writeMemToReg;
            regBranch <= writeBranch;
            regMemWrite <= writeMemWrite;
            regMemRead <= writeMemRead;

        end
    end else begin
        regPCBranch <= writePCBranch;
        regZero <= writeZero;
        regALUOutput <= writeALUOutput;
        regRS2 <= writeRS2;
        regWriteDir <= writeWriteDir;
        regRegWrite <= 0;
        regMemToReg <= 0;
        regBranch <= 0;
        regMemWrite <= 0;
        regMemRead <= 0;

    end
end

assign readPCBranch = regPCBranch;
assign readZero = regZero;
assign readALUOutput = regALUOutput;
assign readRS2 = regRS2;
assign readWriteDir = regWriteDir;
assign readRegWrite = regRegWrite;
assign readMemToReg = regMemToReg;
assign readBranch = regBranch;
assign readMemWrite = regMemWrite;
assign readMemRead = regMemRead;

endmodule
