module MEMWBRegs(
    input clk,
    input rst,
    input en,
    input [31:0]    writeALUOutput,
    input [31:0]    writeDataOutput,
    input [4:0]     writeWriteDir,
    input           writeRegWrite,
    input           writeMemToReg,
    output [31:0]    readALUOutput,
    output [31:0]    readDataOutput,
    output [4:0]     readWriteDir,
    output           readRegWrite,
    output           readMemToReg
);

//Datapath
reg [31:0]  regALUOutput;
reg [31:0]  regDataOutput;
reg [4:0]   regWriteDir;
reg         regRegWrite;
reg         regMemToReg;


always @(posedge clk) begin : WriteRegs
    if (rst == 0) begin
        if (en == 1) begin
            regALUOutput <= writeALUOutput;
            regDataOutput <= writeDataOutput;
            regWriteDir <= writeWriteDir;
            regRegWrite <= writeRegWrite;
            regMemToReg <= writeMemToReg;
        end
    end else begin
        regALUOutput <= 0;
        regDataOutput <= 0;
        regWriteDir <= 0;
        regRegWrite <= 0;
        regMemToReg <= 0;

    end
end

assign readALUOutput = regALUOutput;
assign readDataOutput = regDataOutput;
assign readWriteDir = regWriteDir;
assign readRegWrite = regRegWrite;
assign readMemToReg = regMemToReg;

endmodule
