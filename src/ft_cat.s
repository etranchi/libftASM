%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4
%define READ	   3

section	.bss
	buffer resb	420
	.size   equ $ - buffer

section .text
    global _ft_cat
    extern _ft_puts

_ft_cat:
	push 	rdi
	lea 	rsi, [rel buffer]
	mov 	rdx, buffer.size
	mov 	rax, MACH_SYSCALL(READ)
	syscall
	jc 		exit

    mov 	rdi, STDOUT
	mov 	rdx, rax
	mov 	rax, MACH_SYSCALL(WRITE)
	syscall
	pop 	rdi
	cmp 	rax, 0x0
	jg 		_ft_cat
	ret

exit:
	pop 	rdi
	ret