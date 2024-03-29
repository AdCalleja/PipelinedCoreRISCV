#!/bin/bash

display_help() {
    echo
    echo "Compile C source and generate in ./output/ the source files for PipelinedCore."
    echo
    echo "Usage: $0 -c <source.c>" >&2
    echo
    echo "   -h	Show help"
    echo "   -d,	Specify Text memory depth as 0x00001000 or 4096"
    echo "   -c <source.c>	Specify source."
    echo
    # echo some stuff here for the -a or --add-options 
    exit 1
}

depth=4096 #Default depth
linker="SECTIONS {
. = 0x00000000;
.text : { * (.text); }
. = $depth;
.rodata : { * (.rodata); }
.data : { * (.data); }
.bss : { * (.bss); }
}"
new_depth() {
    depth=$1
    echo "The choosen depth is: $depth"
}
    


while getopts 'h,d:,c:' args; do
    case "${args}" in
    	c)source=${OPTARG}
    	name="$(basename -- $source)"
    	echo 'Source name: '"$name"
    	;;
        d)new_depth "${OPTARG}";;
        h)display_help  # Call your function
          exit 0
          ;;
    esac
done

# Check if source is provided
if [ $# -eq 0 ]; then
    echo "No arguments provided"
    exit 1
fi

# Obtain source name to generate files
#lenght=${#source}
#let lenght=lenght-2
#name= ${source:0:lenght}
#echo 'Source name: '$name

#Get path
SCRIPTPATH="$( cd -- "$(dirname "$0")" >/dev/null 2>&1 ; pwd -P )"

# Create folder for compilation files
if [ ! -d $SCRIPTPATH/tmp ]; then
  mkdir -p $SCRIPTPATH/tmp;
else
  rm -rf $SCRIPTPATH/tmp/*
fi
if [ ! -d $SCRIPTPATH/output ]; then
  mkdir -p $SCRIPTPATH/output;
else
  rm -rf $SCRIPTPATH/output/*
fi

#Copy the linker script with the modified depth
sed "4s/.*/. = $depth; /" $SCRIPTPATH/baselinker.ld > $SCRIPTPATH/tmp/linker.ld

# Compilation
riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -mstrict-align -save-temps=obj -static -c $source -o $SCRIPTPATH/tmp/$name.o
# Link
riscv64-unknown-elf-ld -m elf32lriscv -T $SCRIPTPATH/tmp/linker.ld $SCRIPTPATH/tmp/$name.o -o $SCRIPTPATH/tmp/$name.elf
# Linked ELF to bin
riscv64-unknown-elf-objcopy -O binary $SCRIPTPATH/tmp/$name.elf $SCRIPTPATH/tmp/$name.bin
# Text and Data memory
hexdump -ve '1/4 "%08x\n"' -n $depth $SCRIPTPATH/tmp/$name.bin | grep -v 00000000 > $SCRIPTPATH/output/text.txt
hexdump -ve '1/1 "%02x\n"' -s $depth $SCRIPTPATH/tmp/$name.bin > $SCRIPTPATH/tmp/$name.ram # 1 Byte

# Generate 4 files for the 4*8 x depth
input="$SCRIPTPATH/tmp/$name.ram"
counter=0
while IFS= read -r line
do
    if [ $counter -eq 4 ];then 
        let counter=0 
    fi
    echo $line >> $SCRIPTPATH/output/data$counter.txt
    let counter=counter+1
done < "$input"

#Show the linked memory
echo The memory is:
hexdump $SCRIPTPATH/tmp/$name.bin










# SOME OPTIONS
#Al formato de verilog readmemh
# riscv64-unknown-elf-objcopy -O verilog counter.elf counter.vh
# https://stackoverflow.com/questions/36648190/how-can-i-generate-a-hexfile-from-c-code-for-testing-a-32-bit-risc-v-hardware-de

# COMPILA LINKA .TEXT Y .DATAS
# riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 -mstrict-align -save-temps=obj -static -c $name.c -o $name.o
# echo 'Ended: '$name.o

# riscv64-unknown-elf-ld -m elf32lriscv -T linker.ld $name.o -o $name.elf
# echo 'Ended: '$name.elf

# riscv64-unknown-elf-objcopy --dump-section .text=text.txt $name.elf
# echo 'Ended: text.txt'

# riscv64-unknown-elf-objcopy --dump-section .rodata=rodata.txt --dump-section .data=data.txt --dump-section .bss=bss.data $name.elf
# echo 'Ended: rodata.txt, data.txt, rodata.txt'

# DATA MEMORY 32-bits
# hexdump -ve '1/4 "%08x\n"' -n 4096 ./tmp/$name.bin | grep -v 00000000 > ./output/text.txt
# hexdump -ve '1/4 "%08x\n"' -s 4096 $name.bin > $name.ram # 4 Bytes
# https://reposhub.com/cpp/miscellaneous/darklife-darkriscv.html
