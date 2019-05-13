section .text
    global _ft_strcpy

_ft_strcpy:
    push rdi
cpy_l:
    mov  rax, [rsi]
    mov  [rdi], rax
    cmp [rsi], byte 0
    je end
    inc  rsi
    inc  rdi
    loop cpy_l

end:
    pop rax
    ret