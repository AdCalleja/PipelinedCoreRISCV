#Logisim Tests
#[addr]
#(value inside)
.data
    a: .word 1
    b: .word 2

.text
main:
    lw a0, 0 (a0)     # Load from Data[0+0](1) to x10(0)
    lw a1, 4 (a1)     # Load from Data[0+4](2) to x11(0)
    add a2, a0, a1    # Add 1 + 2 = 3 to x12
    sw a2, 8 (t0)     # Save x12(3) to Data[0+8]
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
    or a4, a3, a2     # x13(0) OR x12(2) = x14(2)
    lw a3, 4 (a3)     # Load from Data[0+4](2) to x13(0)
    beq a4, a3, LWBRANCH # Branch x14(2) - x13(2) = 0
    nop
    nop
    nop
    nop

LWBRANCH:
    add a5, a4, a3    # Add 2 + 2 = 4 to x15