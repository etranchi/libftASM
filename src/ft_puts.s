%define MACH_SYSCALL(x) 0x2000000 | x
%define STDOUT 1
%define WRITE 4
section	.data
    null:
	    db "(null)"

section .text
    global _ft_puts
    extern _ft_strlen
    extern _ft_strcat
    extern _ft_putendline

_ft_puts:
    cmp rdi, 0
    je _null
    call _ft_strlen
    mov rdx, rax ; keep len
    push rbp ; align
    mov rbp, rsp
    sub rsp, 16
    mov r8, rdi ; keep string
    mov rax, MACH_SYSCALL(WRITE)
    lea rsi, [rel r8]
    mov rdi, STDOUT
    syscall
    leave
    call _ft_putendline
    ret

_null:
	lea		rsi, [rel null]
	mov		rdx, 6
	mov		rdi, STDOUT
	mov		rax, MACH_SYSCALL(WRITE)
	syscall
    call _ft_putendline
    ret
