
section .text
    global _ft_strdup
    extern _ft_strlen
    extern _malloc
    extern _ft_memcpy
    

_ft_strdup:
    mov r15, rdi 
	call	_ft_strlen
	inc rax
    mov rdi, rax
	push rax
	call	_malloc
	cmp		rax, 0
	je		fail
	mov	rdi, rax
	mov	rsi, r15
	pop	rdx
	call	_ft_memcpy

fail:
    ret