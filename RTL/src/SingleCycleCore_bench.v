module PipelinedCore_tb();

reg original_clk;
reg rst;
reg btn;
wire [7:0] leds;

PipelinedCore PPCTB(
    .original_clk(original_clk),
    .rst(rst),
`ifdef BUTTON
    .btn(btn),
`endif
    .leds(leds)
);

initial begin
    original_clk = 0;
    rst = 0;
    btn = 0;
    rst = 1;
    #180000 rst = 0;
end

always begin
    #1 original_clk = !original_clk;  
end

always begin
    #30500 btn = !btn;
end

endmodule