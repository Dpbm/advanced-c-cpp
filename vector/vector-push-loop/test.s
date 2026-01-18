	.text
	.file	"iterate-test.cpp"
                                        # Start of file scope inline assembly
	.globl	_ZSt21ios_base_library_initv

                                        # End of file scope inline assembly
	.globl	_Z1fRSt6vectorIiSaIiEE          # -- Begin function _Z1fRSt6vectorIiSaIiEE
	.p2align	4, 0x90
	.type	_Z1fRSt6vectorIiSaIiEE,@function
_Z1fRSt6vectorIiSaIiEE:                 # @_Z1fRSt6vectorIiSaIiEE
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	pushq	%r15
	.cfi_def_cfa_offset 24
	pushq	%r14
	.cfi_def_cfa_offset 32
	pushq	%r13
	.cfi_def_cfa_offset 40
	pushq	%r12
	.cfi_def_cfa_offset 48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	pushq	%rax
	.cfi_def_cfa_offset 64
	.cfi_offset %rbx, -56
	.cfi_offset %r12, -48
	.cfi_offset %r13, -40
	.cfi_offset %r14, -32
	.cfi_offset %r15, -24
	.cfi_offset %rbp, -16
	movq	8(%rdi), %rbx
	cmpq	16(%rdi), %rbx
	je	.LBB0_2
# %bb.1:
	movl	$100, (%rbx)
	addq	$4, %rbx
	movq	%rbx, 8(%rdi)
	jmp	.LBB0_8
.LBB0_2:
	movq	(%rdi), %r14
	subq	%r14, %rbx
	movabsq	$9223372036854775804, %rax      # imm = 0x7FFFFFFFFFFFFFFC
	cmpq	%rax, %rbx
	je	.LBB0_9
# %bb.3:
	movq	%rdi, %r12
	movq	%rbx, %rax
	sarq	$2, %rax
	cmpq	$1, %rax
	movq	%rax, %rcx
	adcq	$0, %rcx
	leaq	(%rcx,%rax), %r13
	movabsq	$2305843009213693951, %rdx      # imm = 0x1FFFFFFFFFFFFFFF
	cmpq	%rdx, %r13
	cmovaeq	%rdx, %r13
	addq	%rax, %rcx
	cmovbq	%rdx, %r13
	leaq	(,%r13,4), %rdi
	callq	_Znwm@PLT
	movq	%rax, %r15
	movl	$100, (%rax,%rbx)
	testq	%rbx, %rbx
	jle	.LBB0_5
# %bb.4:
	movq	%r15, %rdi
	movq	%r14, %rsi
	movq	%rbx, %rdx
	callq	memcpy@PLT
.LBB0_5:
	leaq	(%r15,%rbx), %rbp
	testq	%r14, %r14
	je	.LBB0_7
# %bb.6:
	movq	%r14, %rdi
	movq	%rbx, %rsi
	callq	_ZdlPvm@PLT
.LBB0_7:
	addq	$4, %rbp
	movq	%r15, (%r12)
	movq	%rbp, 8(%r12)
	leaq	(%r15,%r13,4), %rax
	movq	%rax, 16(%r12)
.LBB0_8:
	addq	$8, %rsp
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%r12
	.cfi_def_cfa_offset 40
	popq	%r13
	.cfi_def_cfa_offset 32
	popq	%r14
	.cfi_def_cfa_offset 24
	popq	%r15
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	retq
.LBB0_9:
	.cfi_def_cfa_offset 64
	leaq	.L.str.1(%rip), %rdi
	callq	_ZSt20__throw_length_errorPKc@PLT
.Lfunc_end0:
	.size	_Z1fRSt6vectorIiSaIiEE, .Lfunc_end0-_Z1fRSt6vectorIiSaIiEE
	.cfi_endproc
                                        # -- End function
	.section	.rodata.cst16,"aM",@progbits,16
	.p2align	4, 0x0                          # -- Begin function main
.LCPI1_0:
	.long	1                               # 0x1
	.long	2                               # 0x2
	.long	3                               # 0x3
	.long	5                               # 0x5
	.text
	.globl	main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
.Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, DW.ref.__gxx_personality_v0
	.cfi_lsda 27, .Lexception0
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	pushq	%r15
	.cfi_def_cfa_offset 24
	pushq	%r14
	.cfi_def_cfa_offset 32
	pushq	%r13
	.cfi_def_cfa_offset 40
	pushq	%r12
	.cfi_def_cfa_offset 48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	subq	$24, %rsp
	.cfi_def_cfa_offset 80
	.cfi_offset %rbx, -56
	.cfi_offset %r12, -48
	.cfi_offset %r13, -40
	.cfi_offset %r14, -32
	.cfi_offset %r15, -24
	.cfi_offset %rbp, -16
	movl	$16, %edi
	callq	_Znwm@PLT
	movaps	.LCPI1_0(%rip), %xmm0           # xmm0 = [1,2,3,5]
	movups	%xmm0, (%rax)
	movq	%rax, %r13
	addq	$16, %r13
	xorl	%r14d, %r14d
	movq	%rax, 16(%rsp)                  # 8-byte Spill
	movq	%rax, 8(%rsp)                   # 8-byte Spill
	movq	%r13, %r12
	.p2align	4, 0x90
.LBB1_1:                                # =>This Inner Loop Header: Depth=1
	movq	16(%rsp), %rax                  # 8-byte Reload
	movl	(%rax,%r14), %r15d
	cmpq	%r12, %r13
	je	.LBB1_6
# %bb.2:                                #   in Loop: Header=BB1_1 Depth=1
	movl	$100, (%r13)
	movq	%r13, %rbp
	jmp	.LBB1_19
	.p2align	4, 0x90
.LBB1_6:                                #   in Loop: Header=BB1_1 Depth=1
	movq	%r13, %rbp
	subq	8(%rsp), %rbp                   # 8-byte Folded Reload
	movabsq	$9223372036854775804, %rax      # imm = 0x7FFFFFFFFFFFFFFC
	cmpq	%rax, %rbp
	je	.LBB1_7
# %bb.9:                                #   in Loop: Header=BB1_1 Depth=1
	movq	%rbp, %rax
	sarq	$2, %rax
	cmpq	$1, %rax
	movq	%rax, %rcx
	adcq	$0, %rcx
	leaq	(%rcx,%rax), %rdx
	movabsq	$2305843009213693951, %r12      # imm = 0x1FFFFFFFFFFFFFFF
	cmpq	%r12, %rdx
	jb	.LBB1_11
# %bb.10:                               #   in Loop: Header=BB1_1 Depth=1
	movq	%r12, %rdx
.LBB1_11:                               #   in Loop: Header=BB1_1 Depth=1
	addq	%rax, %rcx
	jb	.LBB1_13
# %bb.12:                               #   in Loop: Header=BB1_1 Depth=1
	movq	%rdx, %r12
.LBB1_13:                               #   in Loop: Header=BB1_1 Depth=1
	leaq	(,%r12,4), %rdi
.Ltmp0:
	callq	_Znwm@PLT
.Ltmp1:
# %bb.14:                               #   in Loop: Header=BB1_1 Depth=1
	movq	%rax, %rbx
	movl	$100, (%rax,%rbp)
	testq	%rbp, %rbp
	movq	8(%rsp), %r13                   # 8-byte Reload
	jle	.LBB1_16
# %bb.15:                               #   in Loop: Header=BB1_1 Depth=1
	movq	%rbx, %rdi
	movq	%r13, %rsi
	movq	%rbp, %rdx
	callq	memcpy@PLT
.LBB1_16:                               #   in Loop: Header=BB1_1 Depth=1
	testq	%r13, %r13
	je	.LBB1_18
# %bb.17:                               #   in Loop: Header=BB1_1 Depth=1
	movq	%r13, %rdi
	movq	%rbp, %rsi
	callq	_ZdlPvm@PLT
.LBB1_18:                               #   in Loop: Header=BB1_1 Depth=1
	addq	%rbx, %rbp
	leaq	(%rbx,%r12,4), %r12
	movq	%rbx, 8(%rsp)                   # 8-byte Spill
.LBB1_19:                               #   in Loop: Header=BB1_1 Depth=1
.Ltmp2:
	movq	%r12, %r13
	movq	_ZSt4cout@GOTPCREL(%rip), %rdi
	movl	%r15d, %esi
	callq	_ZNSolsEi@PLT
.Ltmp3:
# %bb.20:                               #   in Loop: Header=BB1_1 Depth=1
.Ltmp4:
	movl	$1, %edx
	movq	%r12, %r13
	movq	%rax, %rdi
	leaq	.L.str(%rip), %rsi
	callq	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
.Ltmp5:
# %bb.21:                               #   in Loop: Header=BB1_1 Depth=1
	addq	$4, %rbp
	addq	$4, %r14
	movq	%rbp, %r13
	cmpq	$16, %r14
	jne	.LBB1_1
# %bb.3:
	movq	8(%rsp), %rdi                   # 8-byte Reload
	testq	%rdi, %rdi
	je	.LBB1_5
# %bb.4:
	subq	%rdi, %r12
	movq	%r12, %rsi
	callq	_ZdlPvm@PLT
.LBB1_5:
	xorl	%eax, %eax
	addq	$24, %rsp
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%r12
	.cfi_def_cfa_offset 40
	popq	%r13
	.cfi_def_cfa_offset 32
	popq	%r14
	.cfi_def_cfa_offset 24
	popq	%r15
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	retq
.LBB1_7:
	.cfi_def_cfa_offset 80
.Ltmp7:
	leaq	.L.str.1(%rip), %rdi
	callq	_ZSt20__throw_length_errorPKc@PLT
.Ltmp8:
# %bb.8:
.LBB1_23:
.Ltmp9:
	jmp	.LBB1_24
.LBB1_22:
.Ltmp6:
.LBB1_24:
	movq	%rax, %rbx
	movq	8(%rsp), %rdi                   # 8-byte Reload
	testq	%rdi, %rdi
	je	.LBB1_26
# %bb.25:
	subq	%rdi, %r13
	movq	%r13, %rsi
	callq	_ZdlPvm@PLT
.LBB1_26:
	movq	%rbx, %rdi
	callq	_Unwind_Resume@PLT
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc
	.section	.gcc_except_table,"a",@progbits
	.p2align	2, 0x0
GCC_except_table1:
.Lexception0:
	.byte	255                             # @LPStart Encoding = omit
	.byte	255                             # @TType Encoding = omit
	.byte	1                               # Call site Encoding = uleb128
	.uleb128 .Lcst_end0-.Lcst_begin0
.Lcst_begin0:
	.uleb128 .Lfunc_begin0-.Lfunc_begin0    # >> Call Site 1 <<
	.uleb128 .Ltmp0-.Lfunc_begin0           #   Call between .Lfunc_begin0 and .Ltmp0
	.byte	0                               #     has no landing pad
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp0-.Lfunc_begin0           # >> Call Site 2 <<
	.uleb128 .Ltmp1-.Ltmp0                  #   Call between .Ltmp0 and .Ltmp1
	.uleb128 .Ltmp6-.Lfunc_begin0           #     jumps to .Ltmp6
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp1-.Lfunc_begin0           # >> Call Site 3 <<
	.uleb128 .Ltmp2-.Ltmp1                  #   Call between .Ltmp1 and .Ltmp2
	.byte	0                               #     has no landing pad
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp2-.Lfunc_begin0           # >> Call Site 4 <<
	.uleb128 .Ltmp5-.Ltmp2                  #   Call between .Ltmp2 and .Ltmp5
	.uleb128 .Ltmp6-.Lfunc_begin0           #     jumps to .Ltmp6
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp7-.Lfunc_begin0           # >> Call Site 5 <<
	.uleb128 .Ltmp8-.Ltmp7                  #   Call between .Ltmp7 and .Ltmp8
	.uleb128 .Ltmp9-.Lfunc_begin0           #     jumps to .Ltmp9
	.byte	0                               #   On action: cleanup
	.uleb128 .Ltmp8-.Lfunc_begin0           # >> Call Site 6 <<
	.uleb128 .Lfunc_end1-.Ltmp8             #   Call between .Ltmp8 and .Lfunc_end1
	.byte	0                               #     has no landing pad
	.byte	0                               #   On action: cleanup
.Lcst_end0:
	.p2align	2, 0x0
                                        # -- End function
	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	" "
	.size	.L.str, 2

	.type	.L.str.1,@object                # @.str.1
.L.str.1:
	.asciz	"vector::_M_realloc_append"
	.size	.L.str.1, 26

	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.p2align	3, 0x0
	.type	DW.ref.__gxx_personality_v0,@object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.ident	"Debian clang version 19.1.7 (3+b1)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym __gxx_personality_v0
	.addrsig_sym _Unwind_Resume
	.addrsig_sym _ZSt4cout
