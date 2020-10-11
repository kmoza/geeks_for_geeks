	.file	"imp_macros.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "imp_macros.c\0"
LC1:
	.ascii "file:%s\12\0"
LC2:
	.ascii "Oct 11 2020\0"
LC3:
	.ascii "date:%s\12\0"
LC4:
	.ascii "23:35:01\0"
LC5:
	.ascii "time:%s\12\0"
LC6:
	.ascii "line no:%d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	call	___main
	movl	$LC0, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$LC2, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$LC4, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movl	$7, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
