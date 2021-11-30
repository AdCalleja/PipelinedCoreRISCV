	.file	"counter.c"
	.option nopic
	.attribute arch, "rv32i2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.globl	initData
	.section	.sdata,"aw"
	.align	2
	.type	initData, @object
	.size	initData, 4
initData:
	.word	255
	.globl	initData2
	.align	2
	.type	initData2, @object
	.size	initData2, 4
initData2:
	.word	-1412567279
	.text
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-32
	sw	s0,28(sp)
	addi	s0,sp,32
	lui	a5,%hi(initData)
	lw	a5,%lo(initData)(a5)
	addi	a4,a5,1
	lui	a5,%hi(initData)
	sw	a4,%lo(initData)(a5)
.L2:
	li	a5,256
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sb	zero,0(a5)
	lw	a5,-20(s0)
	li	a4,1
	sb	a4,0(a5)
	lw	a5,-20(s0)
	li	a4,2
	sb	a4,0(a5)
	lw	a5,-20(s0)
	li	a4,3
	sb	a4,0(a5)
	lw	a5,-20(s0)
	li	a4,4
	sb	a4,0(a5)
	lw	a5,-20(s0)
	li	a4,5
	sb	a4,0(a5)
	lw	a5,-20(s0)
	li	a4,6
	sb	a4,0(a5)
	lw	a5,-20(s0)
	li	a4,7
	sb	a4,0(a5)
	lw	a5,-20(s0)
	li	a4,8
	sb	a4,0(a5)
	j	.L2
	.size	main, .-main
	.ident	"GCC: (GNU) 11.1.0"
