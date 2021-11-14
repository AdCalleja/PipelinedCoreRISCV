#!/bin/bash

rm *.vvp *.vcd 
iverilog -o PipelinedCore.vvp -I ./../../src -D${defines}=1 ./../../src/PipelinedCore_bench.v
vvp PipelinedCore.vvp
