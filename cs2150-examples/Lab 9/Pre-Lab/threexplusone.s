;Robert Alexander, RMA3MZ, threexplusone.s
	
;Optimization 1:  used bitshift as opposed to idiv
;Optimiaztion 2:  Merged two epilogues into one named end

	
	global threexplusone
	section .text
	
threexplusone:
	;; prologue
	push 	ebp		;save base pointer
	mov  	ebp, esp	;set new pointer

	;; subroutine
	xor	eax, eax	;set eax to 0
	mov	ecx, [ebp+8]	;move first param (num) into ecx
	cmp     ecx, 1		;base case (if num=0 finished)
	je  	end		;jump to end
	jmp 	recurse		;else continue
		
recurse:
	shr  	ecx, 1		;test if even
	jnc  	even		;jump if there is no carry
	mov  	ecx, [ebp+8]	;rest value of number after test
	imul  	ecx, 3		;num*3
	add  	ecx, 1		;num*3+1
	push  	ecx		;push param, no registers to push
	call  	threexplusone	;recursive call
	inc 	eax		;count++
	jmp  	end
	
even:
	mov 	ecx, [ebp+8]
	shr 	ecx, 1		;divide by 2 using bitshift
	push 	ecx		;push param, no registers to push
	call 	threexplusone	;recursive call
	inc 	eax		;count++
	jmp 	end

end:
	;; epilogue for recursive calls
	mov 	esp, ebp	;deallocate local vars (not needed)
	pop 	ebp		;restore base pointer
	ret			;return value