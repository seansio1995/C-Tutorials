	.file	"postLab9.cpp"
	.text
	.align	16, 0x90
	.type	__cxx_global_var_init,@function
__cxx_global_var_init:                  # @__cxx_global_var_init
.Ltmp2:
	.cfi_startproc
# BB#0:
	push	EBP
.Ltmp3:
	.cfi_def_cfa_offset 8
.Ltmp4:
	.cfi_offset ebp, -8
	mov	EBP, ESP
.Ltmp5:
	.cfi_def_cfa_register ebp
	sub	ESP, 24
	lea	EAX, DWORD PTR [_ZStL8__ioinit]
	mov	DWORD PTR [ESP], EAX
	call	_ZNSt8ios_base4InitC1Ev
	lea	EAX, DWORD PTR [_ZNSt8ios_base4InitD1Ev]
	lea	ECX, DWORD PTR [_ZStL8__ioinit]
	lea	EDX, DWORD PTR [__dso_handle]
	mov	DWORD PTR [ESP], EAX
	mov	DWORD PTR [ESP + 4], ECX
	mov	DWORD PTR [ESP + 8], EDX
	call	__cxa_atexit
	mov	DWORD PTR [EBP - 4], EAX # 4-byte Spill
	add	ESP, 24
	pop	EBP
	ret
.Ltmp6:
	.size	__cxx_global_var_init, .Ltmp6-__cxx_global_var_init
.Ltmp7:
	.cfi_endproc
.Leh_func_end0:

	.globl	_ZN6PersonC2ESs
	.align	16, 0x90
	.type	_ZN6PersonC2ESs,@function
_ZN6PersonC2ESs:                        # @_ZN6PersonC2ESs
.Ltmp17:
	.cfi_startproc
	.cfi_personality 0, __gxx_personality_v0
.Leh_func_begin1:
	.cfi_lsda 0, .Lexception1
# BB#0:
	push	EBP
.Ltmp18:
	.cfi_def_cfa_offset 8
.Ltmp19:
	.cfi_offset ebp, -8
	mov	EBP, ESP
.Ltmp20:
	.cfi_def_cfa_register ebp
	push	ESI
	sub	ESP, 52
.Ltmp21:
	.cfi_offset esi, -12
	mov	EAX, DWORD PTR [EBP + 12]
	mov	ECX, DWORD PTR [EBP + 8]
	mov	DWORD PTR [EBP - 8], ECX
	mov	EDX, ESP
	mov	DWORD PTR [EDX], ECX
	mov	DWORD PTR [EBP - 20], EAX # 4-byte Spill
	mov	DWORD PTR [EBP - 24], ECX # 4-byte Spill
	call	_ZNSsC1Ev
	mov	EAX, DWORD PTR [EBP - 24] # 4-byte Reload
.Ltmp8:
	mov	ECX, ESP
	mov	EDX, DWORD PTR [EBP - 20] # 4-byte Reload
	mov	DWORD PTR [ECX + 4], EDX
	mov	ESI, DWORD PTR [EBP - 24] # 4-byte Reload
	mov	DWORD PTR [ECX], ESI
	mov	DWORD PTR [EBP - 28], EAX # 4-byte Spill
	call	_ZNSsaSERKSs
.Ltmp9:
	mov	DWORD PTR [EBP - 32], EAX # 4-byte Spill
	jmp	.LBB1_1
.LBB1_1:
	add	ESP, 52
	pop	ESI
	pop	EBP
	ret
.LBB1_2:
.Ltmp10:
	mov	DWORD PTR [EBP - 12], EAX
	mov	DWORD PTR [EBP - 16], EDX
.Ltmp11:
	mov	EAX, ESP
	mov	EDX, DWORD PTR [EBP - 28] # 4-byte Reload
	mov	DWORD PTR [EAX], EDX
	call	_ZNSsD1Ev
.Ltmp12:
	jmp	.LBB1_3
.LBB1_3:
# BB#4:
	mov	EAX, DWORD PTR [EBP - 12]
	mov	ECX, DWORD PTR [EBP - 16]
	mov	DWORD PTR [EBP - 36], ECX # 4-byte Spill
	mov	DWORD PTR [EBP - 40], EAX # 4-byte Spill
	jmp	.LBB1_6
.LBB1_5:
.Ltmp13:
	mov	DWORD PTR [EBP - 44], EAX # 4-byte Spill
	mov	DWORD PTR [EBP - 48], EDX # 4-byte Spill
	call	_ZSt9terminatev
.LBB1_6:                                # %unwind_resume
	mov	EAX, DWORD PTR [EBP - 40] # 4-byte Reload
	mov	DWORD PTR [ESP], EAX
	call	_Unwind_Resume
.Ltmp22:
	.size	_ZN6PersonC2ESs, .Ltmp22-_ZN6PersonC2ESs
.Ltmp23:
	.cfi_endproc
.Leh_func_end1:
	.section	.gcc_except_table,"a",@progbits
	.align	4
GCC_except_table1:
.Lexception1:
	.byte	255                     # @LPStart Encoding = omit
	.byte	0                       # @TType Encoding = absptr
	.byte	188                     # @TType base offset
	.zero	1
	.byte	3                       # Call site Encoding = udata4
	.byte	52                      # Call site table length
.Lset0 = .Leh_func_begin1-.Leh_func_begin1 # >> Call Site 1 <<
	.long	.Lset0
.Lset1 = .Ltmp8-.Leh_func_begin1        #   Call between .Leh_func_begin1 and .Ltmp8
	.long	.Lset1
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
.Lset2 = .Ltmp8-.Leh_func_begin1        # >> Call Site 2 <<
	.long	.Lset2
.Lset3 = .Ltmp9-.Ltmp8                  #   Call between .Ltmp8 and .Ltmp9
	.long	.Lset3
.Lset4 = .Ltmp10-.Leh_func_begin1       #     jumps to .Ltmp10
	.long	.Lset4
	.byte	0                       #   On action: cleanup
.Lset5 = .Ltmp11-.Leh_func_begin1       # >> Call Site 3 <<
	.long	.Lset5
.Lset6 = .Ltmp12-.Ltmp11                #   Call between .Ltmp11 and .Ltmp12
	.long	.Lset6
.Lset7 = .Ltmp13-.Leh_func_begin1       #     jumps to .Ltmp13
	.long	.Lset7
	.byte	1                       #   On action: 1
.Lset8 = .Ltmp12-.Leh_func_begin1       # >> Call Site 4 <<
	.long	.Lset8
.Lset9 = .Leh_func_end1-.Ltmp12         #   Call between .Ltmp12 and .Leh_func_end1
	.long	.Lset9
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
	.align	4

	.text
	.globl	_ZN6PersonD2Ev
	.align	16, 0x90
	.type	_ZN6PersonD2Ev,@function
_ZN6PersonD2Ev:                         # @_ZN6PersonD2Ev
.Ltmp34:
	.cfi_startproc
	.cfi_personality 0, __gxx_personality_v0
.Leh_func_begin2:
	.cfi_lsda 0, .Lexception2
# BB#0:
	push	EBP
.Ltmp35:
	.cfi_def_cfa_offset 8
.Ltmp36:
	.cfi_offset ebp, -8
	mov	EBP, ESP
.Ltmp37:
	.cfi_def_cfa_register ebp
	sub	ESP, 56
	mov	EAX, DWORD PTR [EBP + 8]
	mov	DWORD PTR [EBP - 4], EAX
.Ltmp24:
	mov	ECX, ESP
	mov	DWORD PTR [ECX + 4], .L.str
	mov	DWORD PTR [ECX], _ZSt4cout
	mov	DWORD PTR [EBP - 16], EAX # 4-byte Spill
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.Ltmp25:
	mov	DWORD PTR [EBP - 20], EAX # 4-byte Spill
	jmp	.LBB2_1
.LBB2_1:
.Ltmp26:
	mov	EAX, ESP
	mov	ECX, DWORD PTR [EBP - 20] # 4-byte Reload
	mov	DWORD PTR [EAX], ECX
	mov	DWORD PTR [EAX + 4], _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	call	_ZNSolsEPFRSoS_E
.Ltmp27:
	mov	DWORD PTR [EBP - 24], EAX # 4-byte Spill
	jmp	.LBB2_2
.LBB2_2:
	mov	EAX, DWORD PTR [EBP - 16] # 4-byte Reload
	mov	DWORD PTR [ESP], EAX
	call	_ZNSsD1Ev
	add	ESP, 56
	pop	EBP
	ret
.LBB2_3:
.Ltmp28:
	mov	DWORD PTR [EBP - 8], EAX
	mov	DWORD PTR [EBP - 12], EDX
.Ltmp29:
	mov	EAX, ESP
	mov	EDX, DWORD PTR [EBP - 16] # 4-byte Reload
	mov	DWORD PTR [EAX], EDX
	call	_ZNSsD1Ev
.Ltmp30:
	jmp	.LBB2_4
.LBB2_4:
# BB#5:
	mov	EAX, DWORD PTR [EBP - 8]
	mov	ECX, DWORD PTR [EBP - 12]
	mov	DWORD PTR [EBP - 28], ECX # 4-byte Spill
	mov	DWORD PTR [EBP - 32], EAX # 4-byte Spill
	jmp	.LBB2_7
.LBB2_6:
.Ltmp31:
	mov	DWORD PTR [EBP - 36], EDX # 4-byte Spill
	mov	DWORD PTR [EBP - 40], EAX # 4-byte Spill
	call	_ZSt9terminatev
.LBB2_7:                                # %unwind_resume
	mov	EAX, DWORD PTR [EBP - 32] # 4-byte Reload
	mov	DWORD PTR [ESP], EAX
	call	_Unwind_Resume
.Ltmp38:
	.size	_ZN6PersonD2Ev, .Ltmp38-_ZN6PersonD2Ev
.Ltmp39:
	.cfi_endproc
.Leh_func_end2:
	.section	.gcc_except_table,"a",@progbits
	.align	4
GCC_except_table2:
.Lexception2:
	.byte	255                     # @LPStart Encoding = omit
	.byte	0                       # @TType Encoding = absptr
	.byte	188                     # @TType base offset
	.zero	1
	.byte	3                       # Call site Encoding = udata4
	.byte	52                      # Call site table length
.Lset10 = .Ltmp24-.Leh_func_begin2      # >> Call Site 1 <<
	.long	.Lset10
.Lset11 = .Ltmp27-.Ltmp24               #   Call between .Ltmp24 and .Ltmp27
	.long	.Lset11
.Lset12 = .Ltmp28-.Leh_func_begin2      #     jumps to .Ltmp28
	.long	.Lset12
	.byte	0                       #   On action: cleanup
.Lset13 = .Ltmp27-.Leh_func_begin2      # >> Call Site 2 <<
	.long	.Lset13
.Lset14 = .Ltmp29-.Ltmp27               #   Call between .Ltmp27 and .Ltmp29
	.long	.Lset14
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
.Lset15 = .Ltmp29-.Leh_func_begin2      # >> Call Site 3 <<
	.long	.Lset15
.Lset16 = .Ltmp30-.Ltmp29               #   Call between .Ltmp29 and .Ltmp30
	.long	.Lset16
.Lset17 = .Ltmp31-.Leh_func_begin2      #     jumps to .Ltmp31
	.long	.Lset17
	.byte	1                       #   On action: 1
.Lset18 = .Ltmp30-.Leh_func_begin2      # >> Call Site 4 <<
	.long	.Lset18
.Lset19 = .Leh_func_end2-.Ltmp30        #   Call between .Ltmp30 and .Leh_func_end2
	.long	.Lset19
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
	.align	4

	.text
	.globl	_ZN7TeacherC2ESsi
	.align	16, 0x90
	.type	_ZN7TeacherC2ESsi,@function
_ZN7TeacherC2ESsi:                      # @_ZN7TeacherC2ESsi
.Ltmp48:
	.cfi_startproc
	.cfi_personality 0, __gxx_personality_v0
.Leh_func_begin3:
	.cfi_lsda 0, .Lexception3
# BB#0:
	push	EBP
.Ltmp49:
	.cfi_def_cfa_offset 8
.Ltmp50:
	.cfi_offset ebp, -8
	mov	EBP, ESP
.Ltmp51:
	.cfi_def_cfa_register ebp
	sub	ESP, 56
	mov	EAX, DWORD PTR [EBP + 16]
	mov	ECX, DWORD PTR [EBP + 12]
	mov	EDX, DWORD PTR [EBP + 8]
	mov	DWORD PTR [EBP - 4], EDX
	mov	DWORD PTR [EBP - 8], EAX
	mov	EAX, DWORD PTR [EBP - 4]
	mov	EDX, ESP
	mov	DWORD PTR [EDX + 4], ECX
	lea	ECX, DWORD PTR [EBP - 16]
	mov	DWORD PTR [EDX], ECX
	mov	DWORD PTR [EBP - 28], EAX # 4-byte Spill
	mov	DWORD PTR [EBP - 32], ECX # 4-byte Spill
	call	_ZNSsC1ERKSs
.Ltmp40:
	mov	EAX, ESP
	mov	ECX, DWORD PTR [EBP - 32] # 4-byte Reload
	mov	DWORD PTR [EAX + 4], ECX
	mov	EDX, DWORD PTR [EBP - 28] # 4-byte Reload
	mov	DWORD PTR [EAX], EDX
	call	_ZN6PersonC2ESs
.Ltmp41:
	jmp	.LBB3_1
.LBB3_1:
	lea	EAX, DWORD PTR [EBP - 16]
	mov	DWORD PTR [ESP], EAX
	call	_ZNSsD1Ev
	mov	EAX, DWORD PTR [EBP - 8]
	mov	ECX, DWORD PTR [EBP - 28] # 4-byte Reload
	mov	DWORD PTR [ECX + 4], EAX
	add	ESP, 56
	pop	EBP
	ret
.LBB3_2:
.Ltmp42:
	mov	DWORD PTR [EBP - 20], EAX
	mov	DWORD PTR [EBP - 24], EDX
.Ltmp43:
	lea	EAX, DWORD PTR [EBP - 16]
	mov	EDX, ESP
	mov	DWORD PTR [EDX], EAX
	call	_ZNSsD1Ev
.Ltmp44:
	jmp	.LBB3_3
.LBB3_3:
# BB#4:
	mov	EAX, DWORD PTR [EBP - 20]
	mov	ECX, DWORD PTR [EBP - 24]
	mov	DWORD PTR [EBP - 36], ECX # 4-byte Spill
	mov	DWORD PTR [EBP - 40], EAX # 4-byte Spill
	jmp	.LBB3_6
.LBB3_5:
.Ltmp45:
	mov	DWORD PTR [EBP - 44], EDX # 4-byte Spill
	mov	DWORD PTR [EBP - 48], EAX # 4-byte Spill
	call	_ZSt9terminatev
.LBB3_6:                                # %unwind_resume
	mov	EAX, DWORD PTR [EBP - 40] # 4-byte Reload
	mov	DWORD PTR [ESP], EAX
	call	_Unwind_Resume
.Ltmp52:
	.size	_ZN7TeacherC2ESsi, .Ltmp52-_ZN7TeacherC2ESsi
.Ltmp53:
	.cfi_endproc
.Leh_func_end3:
	.section	.gcc_except_table,"a",@progbits
	.align	4
GCC_except_table3:
.Lexception3:
	.byte	255                     # @LPStart Encoding = omit
	.byte	0                       # @TType Encoding = absptr
	.byte	73                      # @TType base offset
	.byte	3                       # Call site Encoding = udata4
	.byte	65                      # Call site table length
.Lset20 = .Leh_func_begin3-.Leh_func_begin3 # >> Call Site 1 <<
	.long	.Lset20
.Lset21 = .Ltmp40-.Leh_func_begin3      #   Call between .Leh_func_begin3 and .Ltmp40
	.long	.Lset21
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
.Lset22 = .Ltmp40-.Leh_func_begin3      # >> Call Site 2 <<
	.long	.Lset22
.Lset23 = .Ltmp41-.Ltmp40               #   Call between .Ltmp40 and .Ltmp41
	.long	.Lset23
.Lset24 = .Ltmp42-.Leh_func_begin3      #     jumps to .Ltmp42
	.long	.Lset24
	.byte	0                       #   On action: cleanup
.Lset25 = .Ltmp41-.Leh_func_begin3      # >> Call Site 3 <<
	.long	.Lset25
.Lset26 = .Ltmp43-.Ltmp41               #   Call between .Ltmp41 and .Ltmp43
	.long	.Lset26
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
.Lset27 = .Ltmp43-.Leh_func_begin3      # >> Call Site 4 <<
	.long	.Lset27
.Lset28 = .Ltmp44-.Ltmp43               #   Call between .Ltmp43 and .Ltmp44
	.long	.Lset28
.Lset29 = .Ltmp45-.Leh_func_begin3      #     jumps to .Ltmp45
	.long	.Lset29
	.byte	1                       #   On action: 1
.Lset30 = .Ltmp44-.Leh_func_begin3      # >> Call Site 5 <<
	.long	.Lset30
.Lset31 = .Leh_func_end3-.Ltmp44        #   Call between .Ltmp44 and .Leh_func_end3
	.long	.Lset31
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
	.align	4

	.text
	.globl	_ZN7TeacherD2Ev
	.align	16, 0x90
	.type	_ZN7TeacherD2Ev,@function
_ZN7TeacherD2Ev:                        # @_ZN7TeacherD2Ev
.Ltmp64:
	.cfi_startproc
	.cfi_personality 0, __gxx_personality_v0
.Leh_func_begin4:
	.cfi_lsda 0, .Lexception4
# BB#0:
	push	EBP
.Ltmp65:
	.cfi_def_cfa_offset 8
.Ltmp66:
	.cfi_offset ebp, -8
	mov	EBP, ESP
.Ltmp67:
	.cfi_def_cfa_register ebp
	sub	ESP, 56
	mov	EAX, DWORD PTR [EBP + 8]
	mov	DWORD PTR [EBP - 4], EAX
.Ltmp54:
	mov	ECX, ESP
	mov	DWORD PTR [ECX + 4], .L.str1
	mov	DWORD PTR [ECX], _ZSt4cout
	mov	DWORD PTR [EBP - 16], EAX # 4-byte Spill
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.Ltmp55:
	mov	DWORD PTR [EBP - 20], EAX # 4-byte Spill
	jmp	.LBB4_1
.LBB4_1:
.Ltmp56:
	mov	EAX, ESP
	mov	ECX, DWORD PTR [EBP - 20] # 4-byte Reload
	mov	DWORD PTR [EAX], ECX
	mov	DWORD PTR [EAX + 4], _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	call	_ZNSolsEPFRSoS_E
.Ltmp57:
	mov	DWORD PTR [EBP - 24], EAX # 4-byte Spill
	jmp	.LBB4_2
.LBB4_2:
	mov	EAX, DWORD PTR [EBP - 16] # 4-byte Reload
	mov	DWORD PTR [ESP], EAX
	call	_ZN6PersonD2Ev
	add	ESP, 56
	pop	EBP
	ret
.LBB4_3:
.Ltmp58:
	mov	DWORD PTR [EBP - 8], EAX
	mov	DWORD PTR [EBP - 12], EDX
.Ltmp59:
	mov	EAX, ESP
	mov	EDX, DWORD PTR [EBP - 16] # 4-byte Reload
	mov	DWORD PTR [EAX], EDX
	call	_ZN6PersonD2Ev
.Ltmp60:
	jmp	.LBB4_4
.LBB4_4:
# BB#5:
	mov	EAX, DWORD PTR [EBP - 8]
	mov	ECX, DWORD PTR [EBP - 12]
	mov	DWORD PTR [EBP - 28], EAX # 4-byte Spill
	mov	DWORD PTR [EBP - 32], ECX # 4-byte Spill
	jmp	.LBB4_7
.LBB4_6:
.Ltmp61:
	mov	DWORD PTR [EBP - 36], EDX # 4-byte Spill
	mov	DWORD PTR [EBP - 40], EAX # 4-byte Spill
	call	_ZSt9terminatev
.LBB4_7:                                # %unwind_resume
	mov	EAX, DWORD PTR [EBP - 28] # 4-byte Reload
	mov	DWORD PTR [ESP], EAX
	call	_Unwind_Resume
.Ltmp68:
	.size	_ZN7TeacherD2Ev, .Ltmp68-_ZN7TeacherD2Ev
.Ltmp69:
	.cfi_endproc
.Leh_func_end4:
	.section	.gcc_except_table,"a",@progbits
	.align	4
GCC_except_table4:
.Lexception4:
	.byte	255                     # @LPStart Encoding = omit
	.byte	0                       # @TType Encoding = absptr
	.byte	188                     # @TType base offset
	.zero	1
	.byte	3                       # Call site Encoding = udata4
	.byte	52                      # Call site table length
.Lset32 = .Ltmp54-.Leh_func_begin4      # >> Call Site 1 <<
	.long	.Lset32
.Lset33 = .Ltmp57-.Ltmp54               #   Call between .Ltmp54 and .Ltmp57
	.long	.Lset33
.Lset34 = .Ltmp58-.Leh_func_begin4      #     jumps to .Ltmp58
	.long	.Lset34
	.byte	0                       #   On action: cleanup
.Lset35 = .Ltmp57-.Leh_func_begin4      # >> Call Site 2 <<
	.long	.Lset35
.Lset36 = .Ltmp59-.Ltmp57               #   Call between .Ltmp57 and .Ltmp59
	.long	.Lset36
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
.Lset37 = .Ltmp59-.Leh_func_begin4      # >> Call Site 3 <<
	.long	.Lset37
.Lset38 = .Ltmp60-.Ltmp59               #   Call between .Ltmp59 and .Ltmp60
	.long	.Lset38
.Lset39 = .Ltmp61-.Leh_func_begin4      #     jumps to .Ltmp61
	.long	.Lset39
	.byte	1                       #   On action: 1
.Lset40 = .Ltmp60-.Leh_func_begin4      # >> Call Site 4 <<
	.long	.Lset40
.Lset41 = .Leh_func_end4-.Ltmp60        #   Call between .Ltmp60 and .Leh_func_end4
	.long	.Lset41
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
	.align	4

	.text
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
.Ltmp83:
	.cfi_startproc
	.cfi_personality 0, __gxx_personality_v0
.Leh_func_begin5:
	.cfi_lsda 0, .Lexception5
# BB#0:
	push	EBP
.Ltmp84:
	.cfi_def_cfa_offset 8
.Ltmp85:
	.cfi_offset ebp, -8
	mov	EBP, ESP
.Ltmp86:
	.cfi_def_cfa_register ebp
	sub	ESP, 88
	mov	DWORD PTR [EBP - 4], 0
	lea	EAX, DWORD PTR [EBP - 32]
	mov	ECX, ESP
	mov	DWORD PTR [ECX], EAX
	mov	DWORD PTR [EBP - 48], EAX # 4-byte Spill
	call	_ZNSaIcEC1Ev
.Ltmp70:
	mov	EAX, ESP
	mov	ECX, DWORD PTR [EBP - 48] # 4-byte Reload
	mov	DWORD PTR [EAX + 8], ECX
	lea	EDX, DWORD PTR [EBP - 24]
	mov	DWORD PTR [EAX], EDX
	mov	DWORD PTR [EAX + 4], .L.str2
	call	_ZNSsC1EPKcRKSaIcE
.Ltmp71:
	jmp	.LBB5_1
.LBB5_1:
.Ltmp72:
	lea	EAX, DWORD PTR [EBP - 24]
	mov	ECX, ESP
	mov	DWORD PTR [ECX + 4], EAX
	lea	EAX, DWORD PTR [EBP - 16]
	mov	DWORD PTR [ECX], EAX
	mov	DWORD PTR [ECX + 8], 403
	call	_ZN7TeacherC1ESsi
.Ltmp73:
	jmp	.LBB5_2
.LBB5_2:
.Ltmp78:
	lea	EAX, DWORD PTR [EBP - 24]
	mov	ECX, ESP
	mov	DWORD PTR [ECX], EAX
	call	_ZNSsD1Ev
.Ltmp79:
	jmp	.LBB5_3
.LBB5_3:
	lea	EAX, DWORD PTR [EBP - 32]
	mov	DWORD PTR [ESP], EAX
	call	_ZNSaIcED1Ev
	lea	EAX, DWORD PTR [EBP - 16]
	mov	DWORD PTR [EBP - 4], 0
	mov	DWORD PTR [EBP - 44], 1
	mov	DWORD PTR [ESP], EAX
	call	_ZN7TeacherD1Ev
	mov	EAX, DWORD PTR [EBP - 4]
	add	ESP, 88
	pop	EBP
	ret
.LBB5_4:
.Ltmp80:
	mov	DWORD PTR [EBP - 36], EAX
	mov	DWORD PTR [EBP - 40], EDX
	jmp	.LBB5_7
.LBB5_5:
.Ltmp74:
	mov	DWORD PTR [EBP - 36], EAX
	mov	DWORD PTR [EBP - 40], EDX
.Ltmp75:
	lea	EAX, DWORD PTR [EBP - 24]
	mov	EDX, ESP
	mov	DWORD PTR [EDX], EAX
	call	_ZNSsD1Ev
.Ltmp76:
	jmp	.LBB5_6
.LBB5_6:
.LBB5_7:
	lea	EAX, DWORD PTR [EBP - 32]
	mov	DWORD PTR [ESP], EAX
	call	_ZNSaIcED1Ev
# BB#8:
	mov	EAX, DWORD PTR [EBP - 36]
	mov	ECX, DWORD PTR [EBP - 40]
	mov	DWORD PTR [EBP - 52], EAX # 4-byte Spill
	mov	DWORD PTR [EBP - 56], ECX # 4-byte Spill
	jmp	.LBB5_10
.LBB5_9:
.Ltmp77:
	mov	DWORD PTR [EBP - 60], EDX # 4-byte Spill
	mov	DWORD PTR [EBP - 64], EAX # 4-byte Spill
	call	_ZSt9terminatev
.LBB5_10:                               # %unwind_resume
	mov	EAX, DWORD PTR [EBP - 52] # 4-byte Reload
	mov	DWORD PTR [ESP], EAX
	call	_Unwind_Resume
.Ltmp87:
	.size	main, .Ltmp87-main
.Ltmp88:
	.cfi_endproc
.Leh_func_end5:
	.section	.gcc_except_table,"a",@progbits
	.align	4
GCC_except_table5:
.Lexception5:
	.byte	255                     # @LPStart Encoding = omit
	.byte	0                       # @TType Encoding = absptr
	.byte	214                     # @TType base offset
	.zero	2,128
	.zero	1
	.byte	3                       # Call site Encoding = udata4
	.byte	78                      # Call site table length
.Lset42 = .Ltmp70-.Leh_func_begin5      # >> Call Site 1 <<
	.long	.Lset42
.Lset43 = .Ltmp71-.Ltmp70               #   Call between .Ltmp70 and .Ltmp71
	.long	.Lset43
.Lset44 = .Ltmp80-.Leh_func_begin5      #     jumps to .Ltmp80
	.long	.Lset44
	.byte	0                       #   On action: cleanup
.Lset45 = .Ltmp72-.Leh_func_begin5      # >> Call Site 2 <<
	.long	.Lset45
.Lset46 = .Ltmp73-.Ltmp72               #   Call between .Ltmp72 and .Ltmp73
	.long	.Lset46
.Lset47 = .Ltmp74-.Leh_func_begin5      #     jumps to .Ltmp74
	.long	.Lset47
	.byte	0                       #   On action: cleanup
.Lset48 = .Ltmp78-.Leh_func_begin5      # >> Call Site 3 <<
	.long	.Lset48
.Lset49 = .Ltmp79-.Ltmp78               #   Call between .Ltmp78 and .Ltmp79
	.long	.Lset49
.Lset50 = .Ltmp80-.Leh_func_begin5      #     jumps to .Ltmp80
	.long	.Lset50
	.byte	0                       #   On action: cleanup
.Lset51 = .Ltmp79-.Leh_func_begin5      # >> Call Site 4 <<
	.long	.Lset51
.Lset52 = .Ltmp75-.Ltmp79               #   Call between .Ltmp79 and .Ltmp75
	.long	.Lset52
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
.Lset53 = .Ltmp75-.Leh_func_begin5      # >> Call Site 5 <<
	.long	.Lset53
.Lset54 = .Ltmp76-.Ltmp75               #   Call between .Ltmp75 and .Ltmp76
	.long	.Lset54
.Lset55 = .Ltmp77-.Leh_func_begin5      #     jumps to .Ltmp77
	.long	.Lset55
	.byte	1                       #   On action: 1
.Lset56 = .Ltmp76-.Leh_func_begin5      # >> Call Site 6 <<
	.long	.Lset56
.Lset57 = .Leh_func_end5-.Ltmp76        #   Call between .Ltmp76 and .Leh_func_end5
	.long	.Lset57
	.long	0                       #     has no landing pad
	.byte	0                       #   On action: cleanup
	.byte	1                       # >> Action Record 1 <<
                                        #   Catch TypeInfo 1
	.byte	0                       #   No further actions
                                        # >> Catch TypeInfos <<
	.long	0                       # TypeInfo 1
	.align	4

	.text
	.align	16, 0x90
	.type	_GLOBAL__I_a,@function
_GLOBAL__I_a:                           # @_GLOBAL__I_a
.Ltmp91:
	.cfi_startproc
# BB#0:
	push	EBP
.Ltmp92:
	.cfi_def_cfa_offset 8
.Ltmp93:
	.cfi_offset ebp, -8
	mov	EBP, ESP
.Ltmp94:
	.cfi_def_cfa_register ebp
	sub	ESP, 8
	call	__cxx_global_var_init
	add	ESP, 8
	pop	EBP
	ret
.Ltmp95:
	.size	_GLOBAL__I_a, .Ltmp95-_GLOBAL__I_a
.Ltmp96:
	.cfi_endproc
.Leh_func_end6:

	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	 "calling ~Person filler code."
	.size	.L.str, 29

	.type	.L.str1,@object         # @.str1
.L.str1:
	.asciz	 "calling ~teacher filler code"
	.size	.L.str1, 29

	.type	.L.str2,@object         # @.str2
.L.str2:
	.asciz	 "Bloomfield"
	.size	.L.str2, 11

	.section	.ctors,"aw",@progbits
	.align	4
	.long	_GLOBAL__I_a

	.globl	_ZN6PersonC1ESs
_ZN6PersonC1ESs = _ZN6PersonC2ESs
	.globl	_ZN6PersonD1Ev
_ZN6PersonD1Ev = _ZN6PersonD2Ev
	.globl	_ZN7TeacherC1ESsi
_ZN7TeacherC1ESsi = _ZN7TeacherC2ESsi
	.globl	_ZN7TeacherD1Ev
_ZN7TeacherD1Ev = _ZN7TeacherD2Ev
	.section	".note.GNU-stack","",@progbits
