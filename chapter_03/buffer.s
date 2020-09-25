	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 4
	.globl	_gets                   ## -- Begin function gets
	.p2align	4, 0x90
_gets:                                  ## @gets
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	pushq	%r14
	pushq	%rbx
	movq	%rdi, %r14
	xorl	%ebx, %ebx
	.p2align	4, 0x90
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	callq	_getchar
	cmpl	$-1, %eax
	je	LBB0_4
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	cmpl	$10, %eax
	je	LBB0_6
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	movb	%al, (%r14,%rbx)
	incq	%rbx
	jmp	LBB0_1
LBB0_4:
	testq	%rbx, %rbx
	je	LBB0_5
LBB0_6:
	movb	$0, (%r14,%rbx)
	jmp	LBB0_7
LBB0_5:
	xorl	%r14d, %r14d
LBB0_7:
	movq	%r14, %rax
	popq	%rbx
	popq	%r14
	popq	%rbp
	retq
                                        ## -- End function
	.globl	_echo                   ## -- Begin function echo
	.p2align	4, 0x90
_echo:                                  ## @echo
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	pushq	%rbx
	pushq	%rax
	leaq	-16(%rbp), %rbx
	movq	%rbx, %rdi
	callq	_gets
	movq	%rbx, %rdi
	callq	_puts
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	retq
                                        ## -- End function

.subsections_via_symbols
