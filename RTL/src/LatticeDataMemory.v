module LatticeDataMemory #(
    parameter BYTE_WIDTH = 8,          //width of data bus
    parameter ADDR_WIDTH = 9           //width of addresses buses
  )(
    input                     clk,   //clock signal
    input  [31:0]             data_in,   //[(BYTE_WIDTH-1):0] data_in,  //data to be written
    input  [(ADDR_WIDTH-1):0] addr,  //address for write/read operation
    input                     we,    //write enable signal
    input                     re,    //read enable signal
    input [3:0]               MemoryByteSel,
    output [31:0] data_out      //read data
  );
  
  wire [3:0] csen;
  assign csen = we ? MemoryByteSel : 0;

  SB_RAM40_4K #(
    .READ_MODE(1),
    .WRITE_MODE(1)
)ram0 (
 .RDATA(data_out[7:0]),
 .RADDR(addr),
 .RCLK(clk),
 .RCLKE(1),
 .RE(re),
 .WADDR(addr),
 .WCLK(clk),
 .WCLKE(1),
 .WDATA(data_in[7:0]),
 .WE(csen[0])
);
SB_RAM40_4K #(
    .READ_MODE(1),
    .WRITE_MODE(1)
) ram1 (
 .RDATA(data_out[15:8]),
 .RADDR(addr),
 .RCLK(clk),
 .RCLKE(1),
 .RE(re),
 .WADDR(addr),
 .WCLK(clk),
 .WCLKE(1),
 .WDATA(data_in[15:8]),
 .WE(csen[1])
);
SB_RAM40_4K #(
    .READ_MODE(1),
    .WRITE_MODE(1)
) ram2 (
 .RDATA(data_out[23:16]),
 .RADDR(addr),
 .RCLK(clk),
 .RCLKE(1),
 .RE(re),
 .WADDR(addr),
 .WCLK(clk),
 .WCLKE(1),
 .WDATA(data_in[23:16]),
 .WE(csen[2])
);
SB_RAM40_4K #(
    .READ_MODE(1),
    .WRITE_MODE(1)
) ram3 (
 .RDATA(data_out[31:24]),
 .RADDR(addr),
 .RCLK(clk),
 .RCLKE(1),
 .RE(re),
 .WADDR(addr),
 .WCLK(clk),
 .WCLKE(1),
 .WDATA(data_in[31:24]),
 .WE(csen[3])
);

endmodule
