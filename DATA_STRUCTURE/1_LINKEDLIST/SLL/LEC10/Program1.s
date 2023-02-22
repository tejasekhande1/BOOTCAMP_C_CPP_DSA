	.file	"Program1.c"
	.text
	.globl	head
	.bss
	.align 8
	.type	head, @object
	.size	head, 8
head:
	.zero	8
	.section	.rodata
.LC0:
	.string	"Enter Data : "
.LC1:
	.string	"%d"
	.text
	.globl	createNode
	.type	createNode, @function
createNode:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$16, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	createNode, .-createNode
	.globl	addNode
	.type	addNode, @function
addNode:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, %eax
	call	createNode
	movq	%rax, -8(%rbp)
	movq	head(%rip), %rax
	testq	%rax, %rax
	jne	.L4
	movq	-8(%rbp), %rax
	movq	%rax, head(%rip)
	jmp	.L8
.L4:
	movq	head(%rip), %rax
	movq	%rax, -16(%rbp)
	jmp	.L6
.L7:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
.L6:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L7
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L8:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	addNode, .-addNode
	.globl	addFirst
	.type	addFirst, @function
addFirst:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, %eax
	call	createNode
	movq	%rax, -8(%rbp)
	movq	head(%rip), %rax
	testq	%rax, %rax
	je	.L12
	movq	head(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, head(%rip)
.L12:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	addFirst, .-addFirst
	.globl	addLast
	.type	addLast, @function
addLast:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %eax
	call	addNode
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	addLast, .-addLast
	.globl	countNode
	.type	countNode, @function
countNode:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	head(%rip), %rax
	testq	%rax, %rax
	jne	.L15
	movl	$0, %eax
	jmp	.L16
.L15:
	movq	head(%rip), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L17
.L18:
	addl	$1, -12(%rbp)
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
.L17:
	cmpq	$0, -8(%rbp)
	jne	.L18
	movl	-12(%rbp), %eax
.L16:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	countNode, .-countNode
	.section	.rodata
.LC2:
	.string	"Invalid Output"
	.text
	.globl	addAtPos
	.type	addAtPos, @function
addAtPos:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movl	$0, %eax
	call	countNode
	movl	%eax, -20(%rbp)
	cmpl	$0, -36(%rbp)
	jle	.L20
	movl	-20(%rbp), %eax
	addl	$1, %eax
	cmpl	%eax, -36(%rbp)
	jle	.L21
.L20:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$-1, %eax
	jmp	.L22
.L21:
	movl	-20(%rbp), %eax
	addl	$1, %eax
	cmpl	%eax, -36(%rbp)
	jne	.L23
	movl	$0, %eax
	call	addLast
	jmp	.L24
.L23:
	cmpl	$1, -36(%rbp)
	jne	.L25
	movl	$0, %eax
	call	addFirst
	jmp	.L24
.L25:
	movl	$0, %eax
	call	createNode
	movq	%rax, -8(%rbp)
	movq	head(%rip), %rax
	movq	%rax, -16(%rbp)
	jmp	.L26
.L27:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
	subl	$1, -36(%rbp)
.L26:
	cmpl	$2, -36(%rbp)
	jne	.L27
	movq	-16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L24:
	movl	$0, %eax
.L22:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	addAtPos, .-addAtPos
	.section	.rodata
.LC3:
	.string	"Nodes NOT Found"
.LC4:
	.string	"|%d|->"
.LC5:
	.string	"|%d|"
	.text
	.globl	printNode
	.type	printNode, @function
printNode:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	head(%rip), %rax
	testq	%rax, %rax
	jne	.L29
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L35
.L29:
	movq	head(%rip), %rax
	movq	%rax, -8(%rbp)
	jmp	.L31
.L34:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L32
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L33
.L32:
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L33:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
.L31:
	cmpq	$0, -8(%rbp)
	jne	.L34
	movl	$10, %edi
	call	putchar@PLT
.L35:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	printNode, .-printNode
	.section	.rodata
.LC6:
	.string	"Node NOT Available"
	.text
	.globl	deleteFirst
	.type	deleteFirst, @function
deleteFirst:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	head(%rip), %rax
	testq	%rax, %rax
	jne	.L37
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L40
.L37:
	movq	head(%rip), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L39
	movq	head(%rip), %rax
	movq	%rax, %rdi
	call	free@PLT
	movq	$0, head(%rip)
	jmp	.L40
.L39:
	movq	head(%rip), %rax
	movq	%rax, -8(%rbp)
	movq	head(%rip), %rax
	movq	8(%rax), %rax
	movq	%rax, head(%rip)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
.L40:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	deleteFirst, .-deleteFirst
	.section	.rodata
.LC7:
	.string	"Nodes NOT Available"
	.text
	.globl	deleteLast
	.type	deleteLast, @function
deleteLast:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	head(%rip), %rax
	testq	%rax, %rax
	jne	.L42
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L47
.L42:
	movq	head(%rip), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L44
	movq	head(%rip), %rax
	movq	%rax, %rdi
	call	free@PLT
	movq	$0, head(%rip)
	jmp	.L47
.L44:
	movq	head(%rip), %rax
	movq	%rax, -8(%rbp)
	jmp	.L45
.L46:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
.L45:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L46
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdi
	call	free@PLT
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
.L47:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	deleteLast, .-deleteLast
	.section	.rodata
.LC8:
	.string	"Invalid Position"
	.text
	.globl	deleteAtPos
	.type	deleteAtPos, @function
deleteAtPos:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movl	$0, %eax
	call	countNode
	movl	%eax, -20(%rbp)
	cmpl	$0, -36(%rbp)
	jle	.L49
	movl	-36(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L50
.L49:
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$-1, %eax
	jmp	.L51
.L50:
	movl	-36(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jne	.L52
	movl	$0, %eax
	call	deleteLast
	jmp	.L53
.L52:
	cmpl	$1, -36(%rbp)
	jne	.L54
	movl	$0, %eax
	call	deleteFirst
	jmp	.L53
.L54:
	movq	head(%rip), %rax
	movq	%rax, -16(%rbp)
	jmp	.L55
.L56:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
.L55:
	cmpl	$2, -36(%rbp)
	jne	.L56
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdi
	call	free@PLT
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L53:
	movl	$0, %eax
.L51:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	deleteAtPos, .-deleteAtPos
	.section	.rodata
.LC9:
	.string	"Only One Node Found"
	.text
	.globl	revLL
	.type	revLL, @function
revLL:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	head(%rip), %rax
	testq	%rax, %rax
	jne	.L58
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L63
.L58:
	movq	head(%rip), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	jne	.L60
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L63
.L60:
	movq	head(%rip), %rax
	movq	%rax, -24(%rbp)
	movq	$0, -8(%rbp)
	movq	$0, -16(%rbp)
	jmp	.L61
.L62:
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
.L61:
	cmpq	$0, -24(%rbp)
	jne	.L62
	movq	-16(%rbp), %rax
	movq	%rax, head(%rip)
.L63:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	revLL, .-revLL
	.section	.rodata
.LC10:
	.string	"1.addNode"
.LC11:
	.string	"2.addFirst"
.LC12:
	.string	"3.addAtPosition"
.LC13:
	.string	"4.addLast"
.LC14:
	.string	"5.deleteFirst"
.LC15:
	.string	"6.deleteAtPosition"
.LC16:
	.string	"7.deleteLast"
.LC17:
	.string	"8.countNode"
.LC18:
	.string	"9.printNodes"
.LC19:
	.string	"10.reverseLinkedList"
.LC20:
	.string	"Enter Choice : "
.LC21:
	.string	"Enter Position : "
.LC22:
	.string	"Total Nodes : %d\n"
.LC23:
	.string	"Wrong Choice"
.LC24:
	.string	"Do you want to continue....?"
.LC25:
	.string	"%c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
.L79:
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, -20(%rbp)
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-20(%rbp), %eax
	cmpl	$10, %eax
	ja	.L65
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L67(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L67(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L67:
	.long	.L65-.L67
	.long	.L76-.L67
	.long	.L75-.L67
	.long	.L74-.L67
	.long	.L73-.L67
	.long	.L72-.L67
	.long	.L71-.L67
	.long	.L70-.L67
	.long	.L69-.L67
	.long	.L68-.L67
	.long	.L66-.L67
	.text
.L76:
	movl	$0, %eax
	call	addNode
	jmp	.L77
.L75:
	movl	$0, %eax
	call	addFirst
	jmp	.L77
.L74:
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-16(%rbp), %eax
	movl	%eax, %edi
	call	addAtPos
	jmp	.L77
.L73:
	movl	$0, %eax
	call	addLast
	jmp	.L77
.L72:
	movl	$0, %eax
	call	deleteFirst
	jmp	.L77
.L71:
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-16(%rbp), %eax
	movl	%eax, %edi
	call	deleteAtPos
	jmp	.L77
.L70:
	movl	$0, %eax
	call	deleteLast
	jmp	.L77
.L69:
	movl	$0, %eax
	call	countNode
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L77
.L68:
	movl	$0, %eax
	call	printNode
	jmp	.L77
.L66:
	movl	$0, %eax
	call	revLL
	jmp	.L77
.L65:
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L64
.L77:
	call	getchar@PLT
	leaq	.LC24(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-21(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC25(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movzbl	-21(%rbp), %eax
	cmpb	$89, %al
	je	.L79
	movzbl	-21(%rbp), %eax
	cmpb	$121, %al
	je	.L79
.L64:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L80
	call	__stack_chk_fail@PLT
.L80:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
