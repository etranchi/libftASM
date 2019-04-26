section .text
    global _ft_memcpy


_ft_memcpy:
    push rdi
    mov rax, rdi
    mov rcx, rdx
    cld
    mov rax, rdi
    repnz movsb

end:
    pop rax
    ret

