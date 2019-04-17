section .text
    global _ft_toupper
    extern _ft_isalpha

_ft_toupper:
    call _ft_isalpha
    cmp rax, 0
    je not_good
    cmp rdi, 96
    jl good
    sub rdi, 32
    jmp good

not_good:
    mov rax, rdi
    ret

good:
    mov rax, rdi
    ret