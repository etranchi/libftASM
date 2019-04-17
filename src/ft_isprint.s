section .text
    global _ft_isprint

_ft_isprint:
    cmp rdi, 32
    jl not_good
    cmp rdi, 127
    jl good
    jmp not_good

not_good:
    mov rax, 0
    ret

good:
    mov rax, 1
    ret