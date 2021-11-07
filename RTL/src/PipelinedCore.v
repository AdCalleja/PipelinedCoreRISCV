`include "ALU.v"
`include "ALUControl.v"
`include "DataMemory.v"
`include "ImmGen.v"
`include "MainControl.v"
`include "RegisterFile.v"
`include "TextMemory.v"

//Debouncer
//`define BUTTON = 1
`ifdef BUTTON
    `include "Debouncer.v"
`endif
//SlowClock
//`define SLOWCLK = 1
`ifdef SLOWCLK
    `include "SlowClock.v"
`endif

module PipelinedCore(
    input   original_clk,
    input   rst,
`ifdef BUTTON
    input   btn,
`endif
    output [7:0] leds     //! Onboard Leds to Debug.
);

//Clock source
wire clk;

`ifdef BUTTON
    Debouncer DebouncerSSC(.clk(original_clk), .btn(btn), .btn_out(clk));
`elsif SLOWCLK
     SlowClock SlowClockSCC(.clk(original_clk), .slow_clk(clk));
`else
    assign clk = original_clk;
`endif

endmodule


