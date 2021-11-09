module EXMEMRegs(
    input clk,
    input rst,
    input en,
    //Inputs
    input [31:0]    writePCBranch,
    input           writeZero,
    input [31:0]    writeALUOutput,
    input [31:0]    writeReadData2,
    input [4:0]     writeRd,
    input           writeRegWrite,
    input           writeMemtoReg,
    input           writeBranch,
    input           writeMemWrite,
    input           writeMemRead,

    //Outputs
    output [31:0]   readPCBranch,
    output          readZero,
    output [31:0]   readALUOutput,
    output [31:0]   readReadData2,
    output [4:0]    readRd,
    output          readRegWrite,
    output          readMemtoReg,
    output          readBranch,
    output          readMemWrite,
    output          readMemRead
);
// Datapath
reg [31:0]   regPCBranch;
reg          regZero;
reg [31:0]   regALUOutput;
reg [31:0]   regReadData2;
reg [4:0]    regRd;
// Control
//To WB
reg regRegWrite;
reg regMemtoReg;
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
            regReadData2 <= writeReadData2;
            regRd <= writeRd;
            regRegWrite <= writeRegWrite;
            regMemtoReg <= writeMemtoReg;
            regBranch <= writeBranch;
            regMemWrite <= writeMemWrite;
            regMemRead <= writeMemRead;

        end
    end else begin
        regPCBranch <= writePCBranch;
        regZero <= writeZero;
        regALUOutput <= writeALUOutput;
        regReadData2 <= writeReadData2;
        regRd <= writeRd;
        regRegWrite <= 0;
        regMemtoReg <= 0;
        regBranch <= 0;
        regMemWrite <= 0;
        regMemRead <= 0;

    end
end

assign readPCBranch = regPCBranch;
assign readZero = regZero;
assign readALUOutput = regALUOutput;
assign readReadData2 = regReadData2;
assign readRd = regRd;
assign readRegWrite = regRegWrite;
assign readMemtoReg = regMemtoReg;
assign readBranch = regBranch;
assign readMemWrite = regMemWrite;
assign readMemRead = regMemRead;

endmodule
