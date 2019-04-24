section	.text
	global	_ft_bzero

_ft_bzero:
	xor rcx, rcx

loop:
	cmp rcx, rsi
	je end	
	cmp [rdi], byte 0
	je end
	mov [rdi], byte 0
	add rdi, 1
	inc rcx
	jmp loop

end:
	ret
