#!/bin/bash
if [ ! -d ./output ]; then
  mkdir -p ./output;
else
  rm -rf ./output/*
fi

display_help() {
    echo
    echo "Delete old files, run verilator to check for errors/warnings and run Yosys NextNPR and Icepack-Iceprog"
    echo
    echo "Usage: $0 [-D <BUTTON,SLOWCLOCK,DEBUGINSTRUCTION>]" >&2
    echo
    echo "   -h	Show help"
    echo "   -I,	Specify source route"
    echo "   -D,	Yosys verilog Define. <Parameter>=1 in verilog code"
    echo
    # echo some stuff here for the -a or --add-options 
    exit 1
}

while getopts 'h,I:D:' args; do
    case "${args}" in
        I) route=${OPTARG}
    	echo "Route is ${OPTARG}"
      	;;
        D) defines=${OPTARG}
        echo "Defines  = -D${defines}=1"
        ;;
        h)display_help  # Call your function
          exit 0
          ;;
    esac
done

#Listen to Verilator Warnings #Deactivated
#echo 'RUNNING VERILATOR'
#verilator -Wall -cc ./../src/PipelinedCore.v --prefix PPC -I./../src/ -D${defines}=1
#Synthesize
echo 'RUNNING YOSYS'
yosys -p "read_verilog -I${route} -D${defines}=1 ${route}PipelinedCore.v; synth_ice40 -json ./output/hardware.json" #-q #./../src/PipelinedCore.v
# -defer used to specify readmemh filename as a parameter. Doesn't Work well
#Place and Route
echo 'RUNNING NEXTNPR'
nextpnr-ice40 --hx4k --package tq144 --opt-timing --json ./output/hardware.json --asc ./output/hardware.asc --pcf ${route}../constrains/alhambra-ii_icestudio.pcf
#Program
echo 'PROGRAMMING FPGA'
icepack ./output/hardware.asc ./output/hardware.bin
iceprog ./output/hardware.bin
