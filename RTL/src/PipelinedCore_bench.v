`timescale 1ns / 1ns
`include "PipelinedCore.v"

module PipelinedCore_tb();

reg original_clk;
reg rst;
//reg btn;
wire [7:0] leds;

PipelinedCore PPCTB(
    .original_clk(original_clk),
    .rst(rst),
// `ifdef BUTTON
//     .btn(btn),
// `endif
    .leds(leds)
);

always #1 original_clk = ~original_clk;

initial begin
    $dumpfile("PipelinedCore_tb.vcd");
    $dumpvars(0,PipelinedCore_tb);
    

    original_clk = 0;
    rst = 0;
    //btn = 0;
    #10;
    rst = 1;
    #10;
    rst = 0;
    #200 $finish;
    
end



//always begin
    // #305 btn = !btn;
//end

endmodule
