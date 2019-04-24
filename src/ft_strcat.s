section .text
    global _ft_strcat

_ft_strcat:
    xor rcx, rcx
    mov r8, rdi
    cmp [rsi], byte 0
    je end
    jmp get_size
    jmp end

get_size:
    cmp byte [rdi], 0
    je copy
    inc rcx
    inc rdi
    jmp get_size

copy:
    cmp byte [rsi], 0
    je end
    mov rax, [rsi] ; rax registre gen, rsi reg adressage
    mov [rdi], rax
    inc rdi
    inc rsi
    jmp copy

end:
    mov rax, r8
    ret