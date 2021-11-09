module MEMWBRegs(
    input clk,
    input rst,
    input en,
    input [31:0]    writeALUOutput,
    input [31:0]    writeDataOutput,
    input [4:0]     writeRd,
    input           writeRegWrite,
    input           writeMemtoReg,
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


always @(posedge clk) begin : WriteRegs
    if (rst == 0) begin
        if (en == 1) begin
            regALUOutput <= writeALUOutput;
            regDataOutput <= writeDataOutput;
            regRd <= writeRd;
            regRegWrite <= writeRegWrite;
            regMemtoReg <= writeMemtoReg;
        end
    end else begin
        regALUOutput <= 0;
        regDataOutput <= 0;
        regRd <= 0;
        regRegWrite <= 0;
        regMemtoReg <= 0;

    end
end

assign readALUOutput = regALUOutput;
assign readDataOutput = regDataOutput;
assign readRd = regRd;
assign readRegWrite = regRegWrite;
assign readMemtoReg = regMemtoReg;

endmodule
