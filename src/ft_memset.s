section .text
    global _ft_memset

_ft_memset:
    push rdi ; rdi string
    mov rax, rdi
    mov rcx, rdx ; rdx size
    jmp _loop

_loop:
    cld
    mov rax, rsi ; rsi caract
    rep stosb 
    je end

end:
    pop rax
    ret