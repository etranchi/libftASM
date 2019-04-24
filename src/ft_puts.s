%define MACH_SYSCALL(x) 0x2000000 | x
%define STDOUT 1
%define WRITE 4


section .text
    global _ft_puts

_ft_puts:
