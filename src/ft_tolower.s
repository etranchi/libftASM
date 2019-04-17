section .text
    global _ft_tolower
    extern _ft_isalpha

_ft_tolower:
    call _ft_isalpha
    cmp rax, 0
    je not_good
    cmp rdi, 96
    jg good
    add rdi, 32
    jmp good

not_good:
    mov rax, rdi
    ret

good:
    mov rax, rdi
    ret