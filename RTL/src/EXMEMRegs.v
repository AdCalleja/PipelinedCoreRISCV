module EXMEMRegs(
    input clk,
    input rst,
    input en,
    //Inputs
    //input [31:0]    writePCBranch,
    //input           writeZero,
    input [31:0]    writeALUOutput,
    input [31:0]    writeReadData2Forw,
    input [4:0]     writeRd,
    input           writeRegWrite,
    input           writeMemtoReg,
    //input           writeBranch,
    input           writeMemWrite,
    input           writeMemRead,
    
    //DEBUG
    `ifdef DEBUGINSTRUCTION
        input [31:0]    writeInstruction,
        output [31:0]   readInstruction,
    `endif

    //Outputs
    //output [31:0]   readPCBranch,
    //output          readZero,
    output [31:0]   readALUOutput,
    output [31:0]   readReadData2Forw,
    output [4:0]    readRd,
    output          readRegWrite,
    output          readMemtoReg,
    //output          readBranch,
    output          readMemWrite,
    output          readMemRead
);
// Datapath
//reg [31:0]   regPCBranch;
//reg          regZero;
reg [31:0]   regALUOutput;
reg [31:0]   regReadData2Forw;
reg [4:0]    regRd;
`ifdef DEBUGINSTRUCTION
    reg [31:0]  regInstruction;
`endif

// Control
//To WB
reg regRegWrite;
reg regMemtoReg;
//To MEM
//reg regBranch;
reg regMemWrite;
reg regMemRead;

always @(posedge clk) begin : WriteRegs
    if (rst == 0) begin
        if (en == 1) begin
            //regPCBranch <= writePCBranch;
            //regZero <= writeZero;
            regALUOutput <= writeALUOutput;
            regReadData2Forw <= writeReadData2Forw;
            regRd <= writeRd;
            regRegWrite <= writeRegWrite;
            regMemtoReg <= writeMemtoReg;
            //regBranch <= writeBranch;
            regMemWrite <= writeMemWrite;
            regMemRead <= writeMemRead;
            `ifdef DEBUGINSTRUCTION
                regInstruction <= writeInstruction;
            `endif

        end
    end else begin
        //regPCBranch <= writePCBranch;
        //regZero <= writeZero;
        regALUOutput <= writeALUOutput;
        regReadData2Forw <= writeReadData2Forw;
        regRd <= writeRd;
        regRegWrite <= 0;
        regMemtoReg <= 0;
        //regBranch <= 0;
        regMemWrite <= 0;
        regMemRead <= 0;
        `ifdef DEBUGINSTRUCTION
            regInstruction <= 0;
        `endif

    end
end

//assign readPCBranch = regPCBranch;
//assign readZero = regZero;
assign readALUOutput = regALUOutput;
assign readReadData2Forw = regReadData2Forw;
assign readRd = regRd;
assign readRegWrite = regRegWrite;
assign readMemtoReg = regMemtoReg;
//assign readBranch = regBranch;
assign readMemWrite = regMemWrite;
assign readMemRead = regMemRead;
`ifdef DEBUGINSTRUCTION
    assign readInstruction = regInstruction;
`endif

endmodule
