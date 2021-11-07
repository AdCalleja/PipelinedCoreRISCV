# PipelinedCoreRISCV

 ## Logisim

Not working model. Lacking control.

### Diagrams

Top Level

![Top Level Diagram](images/topleveldiagram.png?raw=true "Top Level Diagram")

## RTL
## Testing
To test the instructions implemented and debug the design the following assembly code has been written in [Ripes](https://github.com/mortbopet/Ripes), getting also the disassembly version of the code:

~~~assembly
#Logisim Tests
#[addr]
#(value inside)

.text
main:
    lw a0, 0 (a0)     # Load from Data[0+0](1) to x10(0)
    lw a1, 4 (a1)     # Load from Data[0+4](2) to x11(0)
    add a2, a1, a0    # Add 1 + 2 = 3 to x12
    sw a2, 4 (t0)     # Save x12(3) to Data[0+4]
    beq a2, a1, EQUAL # Don't brach x12(3) - x11(2) = 1
    sub a3, a2, a1    # Sub x12(3) - x11(2) = x13(1)
    sub a2, a2, a3    # Sub x12(3) - x13(1) = x12(2) a2 == a1
    beq a2, a1, EQUAL # Branch x12(2) - x11(2) = 0
    nop
    nop
    nop
    nop
EQUAL:
    and a3, a3, a2    # x13(1) AND x12(2) = x13(0)
    or a4, a3, a2     # x13(1) OR x12(2) = x14(1)
~~~

![Test Disassembly](images/testdisassembly.png?raw=true "Test Disassembly")

The code in hexadecimal is load to the instruction memory in Logisim. A copy of it is load in the file *textmemory*, same as a copy of the data memory in *datamemory*.

