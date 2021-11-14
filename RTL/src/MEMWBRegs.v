module MEMWBRegs(
    input clk,
    input rst,
    input en,
    //Inputs
    input [31:0]    writeALUOutput,
    input [31:0]    writeDataOutput,
    input [4:0]     writeRd,
    input           writeRegWrite,
    input           writeMemtoReg,

    //DEBUG
    `ifdef DEBUGINSTRUCTION
        input [31:0]    writeInstruction,
        output [31:0]   readInstruction,
    `endif

    //Outputs
    output [31:0]    readALUOutput,
    output [31:0]    readDataOutput,
    output [4:0]     readRd,
    output           readRegWrite,
    output           readMemtoReg
);

//Datapath
reg [31:0]  regALUOutput;
reg [31:0]  regDataOutput;
reg [4:0]   regRd;
reg         regRegWrite;
reg         regMemtoReg;
`ifdef DEBUGINSTRUCTION
    reg [31:0]  regInstruction;
`endif


always @(posedge clk) begin : WriteRegs
    if (rst == 0) begin
        if (en == 1) begin
            regALUOutput <= writeALUOutput;
            regDataOutput <= writeDataOutput;
            regRd <= writeRd;
            regRegWrite <= writeRegWrite;
            regMemtoReg <= writeMemtoReg;
            `ifdef DEBUGINSTRUCTION
                regInstruction <= writeInstruction;
            `endif
        end
    end else begin
        regALUOutput <= 0;
        regDataOutput <= 0;
        regRd <= 0;
        regRegWrite <= 0;
        regMemtoReg <= 0;
        `ifdef DEBUGINSTRUCTION
            regInstruction <= 0;
        `endif

    end
end

assign readALUOutput = regALUOutput;
assign readDataOutput = regDataOutput;
assign readRd = regRd;
assign readRegWrite = regRegWrite;
assign readMemtoReg = regMemtoReg;
`ifdef DEBUGINSTRUCTION
    assign readInstruction = regInstruction;
`endif

endmodule
