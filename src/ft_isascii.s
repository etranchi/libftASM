section .text
    global _ft_isascii

_ft_isascii:
    cmp rdi, 0
    jl not_good
    cmp rdi, 256
    jl good
    jmp not_good

not_good:
    mov rax, 0
    ret

good:
    mov rax, 1
    ret