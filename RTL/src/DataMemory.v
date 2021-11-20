module DataMemory #(
  parameter BYTE_WIDTH = 8,          //width of data bus
  parameter ADDR_WIDTH = 8           //width of addresses buses
)(
  input                     clk,   //clock signal
  input  [31:0]             data_in,   //[(BYTE_WIDTH-1):0] data_in,  //data to be written
  input  [(ADDR_WIDTH-1):0] addr,  //address for write/read operation
  input                     we,    //write enable signal
  input                     re,    //read enable signal
  input [3:0]               MemoryByteSel,
  output [31:0] data_out      //read data
);

reg [BYTE_WIDTH-1:0] ram0 [2**(ADDR_WIDTH-3):0]; //Depth = [2**ADDR_WIDTH-1:0]
reg [BYTE_WIDTH-1:0] ram1 [2**(ADDR_WIDTH-3):0];
reg [BYTE_WIDTH-1:0] ram2 [2**(ADDR_WIDTH-3):0];
reg [BYTE_WIDTH-1:0] ram3 [2**(ADDR_WIDTH-3):0];
//Height of the banck is calculates based on the addr width - 2. The lower bits used to select the byte colum.
//reg [ADDR_WIDTH-1:0] addr_r;
reg [7:0] Byte0;
reg [7:0] Byte1;
reg [7:0] Byte2;
reg [7:0] Byte3;

//Initializa RAM
integer idx;
initial begin
  $readmemh("/home/adrian/codigo/RISC-V/PipelinedCoreRISCV/RTL/src/ram0.txt", ram0);
  $readmemh("/home/adrian/codigo/RISC-V/PipelinedCoreRISCV/RTL/src/ram1.txt", ram1);
  $readmemh("/home/adrian/codigo/RISC-V/PipelinedCoreRISCV/RTL/src/ram2.txt", ram2);
  $readmemh("/home/adrian/codigo/RISC-V/PipelinedCoreRISCV/RTL/src/ram3.txt", ram3);
  $dumpfile("PipelinedCore_tb.vcd");
  for (idx = 0; idx < 10; idx = idx + 1) $dumpvars(0, ram0[idx]);
  for (idx = 0; idx < 10; idx = idx + 1) $dumpvars(1, ram1[idx]);
  for (idx = 0; idx < 10; idx = idx + 1) $dumpvars(2, ram2[idx]);
  for (idx = 0; idx < 10; idx = idx + 1) $dumpvars(3, ram3[idx]);
end

always @(negedge clk) begin //WRITE
  if (we) begin
    if(MemoryByteSel[0]) ram0[addr[ADDR_WIDTH-1:2]] <= data_in[7:0];
    if(MemoryByteSel[1]) ram1[addr[ADDR_WIDTH-1:2]] <= data_in[15:8];
    if(MemoryByteSel[2]) ram2[addr[ADDR_WIDTH-1:2]] <= data_in[23:16];
    if(MemoryByteSel[3]) ram3[addr[ADDR_WIDTH-1:2]] <= data_in[31:24];
  end
  if (re) begin
    if(MemoryByteSel[0]) Byte0 <= ram0[addr[ADDR_WIDTH-1:2]];
    else Byte0 <= 0;
    if(MemoryByteSel[1]) Byte1 <= ram1[addr[ADDR_WIDTH-1:2]];
    else Byte1 <= 0;
    if(MemoryByteSel[2]) Byte2 <= ram2[addr[ADDR_WIDTH-1:2]];
    else Byte2 <= 0;
    if(MemoryByteSel[3]) Byte3 <= ram3[addr[ADDR_WIDTH-1:2]];
    else Byte3 <= 0;
  end
end


assign data_out = {Byte3,Byte2,Byte1,Byte0};

endmodule
