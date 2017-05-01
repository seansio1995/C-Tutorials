;                              mathlib.s
;
; Author  : Robert Alexander
; Date    : Nov 2, 2013
; Purpose : Product multiplys, power adds the power
	
	global product
	global power

	section .text

product:
	;; prologue
	push	ebp		;save old base pointer
	mov	ebp, esp	;set new base pointer
	push 	esi		;push to use in callee
	push	ebx		;in case I use later
	push	edi		;in case I use later

	;; subroutine body
	xor	eax, eax	;set eax to zero (sum)
	mov	esi, [ebp+8]	;x value
	mov	ecx, [ebp+12]	;y: counter (# times to add x value to eax)

loop:
	;; loop for adding
	cmp	ecx, 0		;if counter>=0 continue
	jle	done		;else jump to end
	add	eax, esi	;add param to sum
	dec	ecx		;counter--
	jmp	loop

done:	
	;;;   epilogue
	pop	edi		;recover callee save registers
	pop	ebx		;recover callee save registers
	pop	esi		;recover callee save registers
	pop	ebp		;no local vars, so skip to restoring base pointer
	ret

power:
	;;  prologue
	push	ebp		;base ptr
	mov	ebp, esp	;stack ptr=base ptr
	push 	edi		;push to use in callee
	push	esi		;in case I use later
	push	ebx		;in case I use later

	;; subroutine body
	mov	edi, [ebp+8]	;x (base)
	mov	ecx, [ebp+12]	;y (power)
	xor	eax, eax	;total
	cmp	ecx, 0		;if (y>0)
	jg	recurse		;jump into recursion
	mov	eax, 1		;base case return 1
	jmp	end		;jump to the end
	
	
recurse:
	;; recursive body
	
	dec	ecx		;y--
	push	ecx		;push new value of ecx
	push	edi		;push the original base
	call	power		;call power again with decremented y
	push	eax		;push the accumulated total
	push	edi		;push the base
	call	product		;multiply them together, returns modified eax
	
end:
	;; epilogue
	pop	ebx		;recover callee saved register
	pop	esi		;"
	pop	edi		;"
	leave			;(mov esp, ebp) and pop ebp (restores caller base)
	ret
	
	
	
	
	
	