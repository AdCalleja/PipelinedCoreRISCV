SECTIONS {
. = 0x00000000;
.text : { * (.text); }
. = 4096;
.rodata : { * (.rodata); }
.data : { * (.data); }
.bss : { * (.bss); }
}
