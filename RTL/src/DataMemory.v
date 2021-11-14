module DataMemory #(
  parameter DATA_WIDTH=32,          //width of data bus
  parameter ADDR_WIDTH=4           //width of addresses buses
)(
  input                     clk,   //clock signal
  input  [(DATA_WIDTH-1):0] data_in,  //data to be written
  input  [(ADDR_WIDTH-1):0] addr,  //address for write/read operation
  input                     we,    //write enable signal
  input                     re,    //read enable signal
  output [(DATA_WIDTH-1):0] data_out      //read data
);

  reg [DATA_WIDTH-1:0] ram [2**ADDR_WIDTH-1:0]; //Depth = [2**ADDR_WIDTH-1:0]
  //reg [ADDR_WIDTH-1:0] addr_r;

  //Initializa RAM
  integer idx;
  initial begin
    $readmemh("/home/adrian/codigo/RISC-V/PipelinedCoreRISCV/RTL/src/datamemoryverilog.txt", ram);
    $dumpfile("PipelinedCore_tb.vcd");
    for (idx = 0; idx < 10; idx = idx + 1) $dumpvars(0, ram[idx]);
  end

  always @(negedge clk) begin //WRITE
      if (we) begin
          ram[addr] <= data_in;
      end
      //addr_r <= addr;
  end

  // always @(negedge clk) begin
  //     if (re) begin
  //       data_out <= ram[addr];
  //     end else begin
  //       data_out <= 0;
  //     end
  // end

  assign data_out = re ? ram[addr] : 0; //READ

endmodule
