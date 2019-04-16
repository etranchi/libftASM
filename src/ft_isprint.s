section .text
    global _ft_isprint

_ft_isprint:
    cmp rdi, 40
    jl not_good
    cmp rdi, 177
    jl good
    jmp not_good

not_good:
    mov rax, 0
    ret

good:
    mov rax, 1
    ret