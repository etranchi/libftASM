section .text
    global _ft_isalpha

_ft_isalpha:
    cmp rdi, 65
    jl not_good
    cmp rdi, 91
    jl good
    cmp rdi, 123
    jl good
    jmp not_good

not_good:
    mov rax, 0
    ret

good:
    mov rax, 1
    ret