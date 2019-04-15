section .text
        global _ft_isdigit

_ft_isdigit:
    cmp rdi, 48
    jl not_good 
    cmp rdi, 57
    jg not_good
    jmp good

not_good:
    mov rax, 0
    ret

good:
    mov rax, 1
    ret