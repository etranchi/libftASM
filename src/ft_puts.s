%define MACH_SYSCALL(x) 0x2000000 | x
%define STDOUT 1
%define WRITE 4

section .data
    return: dw 10

section .text
    global _ft_puts
    extern _ft_strlen
    extern _ft_strcat
    
_ft_puts:
    call _ft_strlen
    mov rdx, rax
    push rbp
    mov rbp, rsp
    sub rsp, 16
    mov r8, rdi
    mov rax, MACH_SYSCALL(WRITE)
    lea rsi, [rel r8]
    mov rdi, STDOUT
    syscall
    leave
    ret

