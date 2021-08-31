	.file	"my_test01.c"
	.text
	.globl	exchange
	.def	exchange;	.scl	2;	.type	32;	.endef
	.seh_proc	exchange
exchange:
	.seh_endprologue
	movl	(%rcx), %eax
	movl	%edx, (%rcx)
	ret
	.seh_endproc
	.globl	plus
	.def	plus;	.scl	2;	.type	32;	.endef
	.seh_proc	plus
plus:
	.seh_endprologue
	movq	%rcx, %rax
	ret
	.seh_endproc
	.globl	scale
	.def	scale;	.scl	2;	.type	32;	.endef
	.seh_proc	scale
scale:
	.seh_endprologue
	leal	(%rcx,%rdx,4), %eax
	leal	(%r8,%r8,2), %ecx
	leal	0(,%rcx,4), %edx
	addl	%edx, %eax
	ret
	.seh_endproc
	.globl	arith
	.def	arith;	.scl	2;	.type	32;	.endef
	.seh_proc	arith
arith:
	.seh_endprologue
	xorl	%edx, %ecx
	leal	(%r8,%r8,2), %edx
	movl	%edx, %eax
	sall	$4, %eax
	andl	$252645135, %ecx
	subl	%ecx, %eax
	ret
	.seh_endproc
	.globl	comp
	.def	comp;	.scl	2;	.type	32;	.endef
	.seh_proc	comp
comp:
	.seh_endprologue
	cmpb	%dl, %cl
	setl	%al
	movzbl	%al, %eax
	ret
	.seh_endproc
	.globl	absdiff_se
	.def	absdiff_se;	.scl	2;	.type	32;	.endef
	.seh_proc	absdiff_se
absdiff_se:
	.seh_endprologue
	cmpl	%edx, %ecx
	jge	.L7
	movl	%edx, %eax
	subl	%ecx, %eax
.L6:
	ret
.L7:
	movl	%ecx, %eax
	subl	%edx, %eax
	jmp	.L6
	.seh_endproc
	.globl	comvdiff_se
	.def	comvdiff_se;	.scl	2;	.type	32;	.endef
	.seh_proc	comvdiff_se
comvdiff_se:
	.seh_endprologue
	movl	%edx, %r8d
	subl	%ecx, %r8d
	movl	%ecx, %eax
	subl	%edx, %eax
	cmpl	%ecx, %edx
	jle	.L9
	movl	%r8d, %eax
.L9:
	ret
	.seh_endproc
	.globl	proc
	.def	proc;	.scl	2;	.type	32;	.endef
	.seh_proc	proc
proc:
	.seh_endprologue
	ret
	.seh_endproc
	.globl	swap
	.def	swap;	.scl	2;	.type	32;	.endef
	.seh_proc	swap
swap:
	.seh_endprologue
	movl	(%rcx), %eax
	movl	(%rdx), %r8d
	movl	%r8d, (%rcx)
	movl	%eax, (%rdx)
	addl	%r8d, %eax
	ret
	.seh_endproc
	.globl	caller
	.def	caller;	.scl	2;	.type	32;	.endef
	.seh_proc	caller
caller:
	subq	$56, %rsp
	.seh_stackalloc	56
	.seh_endprologue
	movl	$534, 44(%rsp)
	movl	$1057, 40(%rsp)
	leaq	40(%rsp), %rdx
	leaq	44(%rsp), %rcx
	call	swap
	movl	44(%rsp), %edx
	subl	40(%rsp), %edx
	imull	%edx, %eax
	addq	$56, %rsp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "a = %ld, b = %ld\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	subq	$56, %rsp
	.seh_stackalloc	56
	.seh_endprologue
	call	__main
	movl	$4, 44(%rsp)
	leaq	44(%rsp), %rcx
	movl	$3, %edx
	call	exchange
	movl	%eax, %r8d
	movl	44(%rsp), %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$56, %rsp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
