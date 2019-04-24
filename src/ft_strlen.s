section .text
    global _ft_strlen

_ft_strlen:
    push rdi
    jmp _loop

_loop:
    mov rcx, 0
    mov al, 0
    cld
    not rcx
    repne scasb
    je end
    inc rcx

end:
    not rcx
    dec rcx
    pop rdi
    mov rax, rcx
    ret