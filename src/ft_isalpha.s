section .text
    global _ft_isalpha

_ft_isalpha:
    cmp rdi, 50
    jg check_min
    jl check_maj
    jmp not_good

check_min:
    sub  rdi,  64
    cmp  rdi,  26
    ja   good
    jmp not_good
    
check_maj:
    sub  rdi,  96
    cmp  rdi,  26
    ja   good
    jmp not_good


not_good:
    mov rax, 0
    ret

good:
    mov rax, 1
    ret