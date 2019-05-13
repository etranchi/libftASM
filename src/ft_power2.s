section .text
    global _ft_power2

_ft_power2:
    mov rax, rdi
    mov rdx, rdi

return:
    mul rax
    ret

zero:
    mov rax, 0
    ret