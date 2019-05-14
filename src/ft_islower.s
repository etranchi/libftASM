section .text 
    global _ft_islower

_ft_islower:
    cmp rdi, 97
    jl nl
    cmp rdi, 123
    jl good

nl:
    mov rax, 0
    ret

good:
    mov rax, 1
    ret