	.text
	.file	"return_lvalues.cpp"
                                        # Start of file scope inline assembly
	.globl	_ZSt21ios_base_library_initv

                                        # End of file scope inline assembly
	.globl	_Z12may_not_workv               # -- Begin function _Z12may_not_workv
	.p2align	4, 0x90
	.type	_Z12may_not_workv,@function
_Z12may_not_workv:                      # @_Z12may_not_workv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	$10, -4(%rbp)
	leaq	-4(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	_Z12may_not_workv, .Lfunc_end0-_Z12may_not_workv
	.cfi_endproc
                                        # -- End function
	.globl	_Z19return_ref_from_inpRi       # -- Begin function _Z19return_ref_from_inpRi
	.p2align	4, 0x90
	.type	_Z19return_ref_from_inpRi,@function
_Z19return_ref_from_inpRi:              # @_Z19return_ref_from_inpRi
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end1:
	.size	_Z19return_ref_from_inpRi, .Lfunc_end1-_Z19return_ref_from_inpRi
	.cfi_endproc
                                        # -- End function
	.globl	_Z14default_staticv             # -- Begin function _Z14default_staticv
	.p2align	4, 0x90
	.type	_Z14default_staticv,@function
_Z14default_staticv:                    # @_Z14default_staticv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	_ZZ14default_staticvE1a(%rip), %eax
	addl	$30, %eax
	movl	%eax, _ZZ14default_staticvE1a(%rip)
	movl	_ZZ14default_staticvE1a(%rip), %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end2:
	.size	_Z14default_staticv, .Lfunc_end2-_Z14default_staticv
	.cfi_endproc
                                        # -- End function
	.globl	_Z18lvalue_with_staticv         # -- Begin function _Z18lvalue_with_staticv
	.p2align	4, 0x90
	.type	_Z18lvalue_with_staticv,@function
_Z18lvalue_with_staticv:                # @_Z18lvalue_with_staticv
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	_ZZ18lvalue_with_staticvE1b(%rip), %eax
	addl	$10, %eax
	movl	%eax, _ZZ18lvalue_with_staticvE1b(%rip)
	leaq	_ZZ18lvalue_with_staticvE1b(%rip), %rax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end3:
	.size	_Z18lvalue_with_staticv, .Lfunc_end3-_Z18lvalue_with_staticv
	.cfi_endproc
                                        # -- End function
	.globl	_Z16print_type_valueRi          # -- Begin function _Z16print_type_valueRi
	.p2align	4, 0x90
	.type	_Z16print_type_valueRi,@function
_Z16print_type_valueRi:                 # @_Z16print_type_valueRi
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	_ZSt4cout@GOTPCREL(%rip), %rdi
	leaq	.L.str(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end4:
	.size	_Z16print_type_valueRi, .Lfunc_end4-_Z16print_type_valueRi
	.cfi_endproc
                                        # -- End function
	.globl	_Z16print_type_valueOi          # -- Begin function _Z16print_type_valueOi
	.p2align	4, 0x90
	.type	_Z16print_type_valueOi,@function
_Z16print_type_valueOi:                 # @_Z16print_type_valueOi
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	_ZSt4cout@GOTPCREL(%rip), %rdi
	leaq	.L.str.1(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	addq	$16, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end5:
	.size	_Z16print_type_valueOi, .Lfunc_end5-_Z16print_type_valueOi
	.cfi_endproc
                                        # -- End function
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movl	$0, -4(%rbp)
	movq	_ZSt4cout@GOTPCREL(%rip), %rdi
	leaq	.L.str.2(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	callq	_Z12may_not_workv
	movl	(%rax), %eax
	movl	%eax, -8(%rbp)
	leaq	-8(%rbp), %rdi
	callq	_Z16print_type_valueRi
	movq	_ZSt4cout@GOTPCREL(%rip), %rdi
	leaq	.L.str.3(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	movl	-8(%rbp), %esi
	callq	_ZNSolsEi@PLT
	movq	%rax, %rdi
	leaq	.L.str.4(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movl	$20, -8(%rbp)
	movq	_ZSt4cout@GOTPCREL(%rip), %rdi
	leaq	.L.str.3(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	movl	-8(%rbp), %esi
	callq	_ZNSolsEi@PLT
	movq	%rax, %rdi
	leaq	.L.str.4(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	callq	_Z12may_not_workv
	movl	$30, (%rax)
	movl	$45, -12(%rbp)
	leaq	-12(%rbp), %rdi
	callq	_Z19return_ref_from_inpRi
	movl	$34, (%rax)
	movq	_ZSt4cout@GOTPCREL(%rip), %rdi
	leaq	.L.str.5(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	movl	-12(%rbp), %esi
	callq	_ZNSolsEi@PLT
	movq	%rax, %rdi
	leaq	.L.str.4(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	$0, -24(%rbp)
.LBB6_1:                                # =>This Inner Loop Header: Depth=1
	cmpq	$3, -24(%rbp)
	jae	.LBB6_4
# %bb.2:                                #   in Loop: Header=BB6_1 Depth=1
	movq	_ZSt4cout@GOTPCREL(%rip), %rdi
	leaq	.L.str.6(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	movq	-24(%rbp), %rsi
	callq	_ZNSolsEm@PLT
	movq	%rax, %rdi
	leaq	.L.str.7(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, -40(%rbp)                 # 8-byte Spill
	callq	_Z14default_staticv
	movq	-40(%rbp), %rdi                 # 8-byte Reload
	movl	%eax, %esi
	callq	_ZNSolsEi@PLT
	movq	%rax, %rdi
	leaq	.L.str.4(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
# %bb.3:                                #   in Loop: Header=BB6_1 Depth=1
	movq	-24(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -24(%rbp)
	jmp	.LBB6_1
.LBB6_4:
	callq	_Z18lvalue_with_staticv
	movl	(%rax), %ecx
	addl	$5, %ecx
	movl	%ecx, (%rax)
	callq	_Z18lvalue_with_staticv
	movl	(%rax), %eax
	movl	%eax, -28(%rbp)
	movq	_ZSt4cout@GOTPCREL(%rip), %rdi
	leaq	.L.str.8(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdi
	movl	-28(%rbp), %esi
	callq	_ZNSolsEi@PLT
	movq	%rax, %rdi
	leaq	.L.str.4(%rip), %rsi
	callq	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	xorl	%eax, %eax
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end6:
	.size	main, .Lfunc_end6-main
	.cfi_endproc
                                        # -- End function
	.type	_ZZ14default_staticvE1a,@object # @_ZZ14default_staticvE1a
	.data
	.p2align	2, 0x0
_ZZ14default_staticvE1a:
	.long	10                              # 0xa
	.size	_ZZ14default_staticvE1a, 4

	.type	_ZZ18lvalue_with_staticvE1b,@object # @_ZZ18lvalue_with_staticvE1b
	.p2align	2, 0x0
_ZZ18lvalue_with_staticvE1b:
	.long	30                              # 0x1e
	.size	_ZZ18lvalue_with_staticvE1b, 4

	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"is a lvalue\n"
	.size	.L.str, 13

	.type	.L.str.1,@object                # @.str.1
.L.str.1:
	.asciz	"is a rvalue\n"
	.size	.L.str.1, 13

	.type	.L.str.2,@object                # @.str.2
.L.str.2:
	.asciz	"--from may not work--\n"
	.size	.L.str.2, 23

	.type	.L.str.3,@object                # @.str.3
.L.str.3:
	.asciz	"d value << "
	.size	.L.str.3, 12

	.type	.L.str.4,@object                # @.str.4
.L.str.4:
	.asciz	"\n"
	.size	.L.str.4, 2

	.type	.L.str.5,@object                # @.str.5
.L.str.5:
	.asciz	"a << "
	.size	.L.str.5, 6

	.type	.L.str.6,@object                # @.str.6
.L.str.6:
	.asciz	"static i="
	.size	.L.str.6, 10

	.type	.L.str.7,@object                # @.str.7
.L.str.7:
	.asciz	"; value="
	.size	.L.str.7, 9

	.type	.L.str.8,@object                # @.str.8
.L.str.8:
	.asciz	"c value << "
	.size	.L.str.8, 12

	.ident	"Debian clang version 19.1.7 (3+b1)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym _Z12may_not_workv
	.addrsig_sym _Z19return_ref_from_inpRi
	.addrsig_sym _Z14default_staticv
	.addrsig_sym _Z18lvalue_with_staticv
	.addrsig_sym _Z16print_type_valueRi
	.addrsig_sym _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	.addrsig_sym _ZNSolsEi
	.addrsig_sym _ZNSolsEm
	.addrsig_sym _ZZ14default_staticvE1a
	.addrsig_sym _ZZ18lvalue_with_staticvE1b
	.addrsig_sym _ZSt4cout
