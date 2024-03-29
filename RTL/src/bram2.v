module bram2#(
    parameter ADDR_WIDTH = 8         //width of addresses buses
)(
input CLK,
input [(ADDR_WIDTH-3):0] W_ADDR,
input [(ADDR_WIDTH-3):0] R_ADDR,
input WRITE_EN,
input READ_EN,
input [7:0] DIN,
output reg [7:0] DOUT
);

reg [7:0] mem [2**(ADDR_WIDTH-3):0];

integer idx;
initial begin
    $readmemh("../build/output/data2.txt", mem);
    $dumpfile("PipelinedCore_tb.vcd");
    for (idx = 0; idx < 10; idx = idx + 1) $dumpvars(0, mem[idx]);
end
always @(posedge CLK) begin
if (WRITE_EN)
mem[W_ADDR] <= DIN;
if (READ_EN)
DOUT <= mem[R_ADDR];
end
endmodule
