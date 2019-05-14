section .text
    global _ft_isupper

_ft_isupper:
    cmp rdi, 65
    jl nu
    cmp rdi, 91
    jl good

nu:
    mov rax, 0
    ret

good:
    mov rax, 1
    ret