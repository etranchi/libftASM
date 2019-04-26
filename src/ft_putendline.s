%define MACH_SYSCALL(x) 0x2000000 | x
%define STDOUT 1
%define WRITE 4

section .data
    return: db '', 10

section .text
    global _ft_putendline

_ft_putendline:
    push rbp ; make space for write
    mov rbp, rsp
    sub rsp, 16
    mov rdx, 2
    mov rax, MACH_SYSCALL(WRITE)
    lea rsi, [rel return]
    mov rdi, STDOUT
    syscall
    leave
    ret