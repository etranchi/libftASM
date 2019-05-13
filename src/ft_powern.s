section .text
    global _ft_powern
    extern _ft_power2

_ft_powern:
    cmp rdi, 0
    je zero
    cmp rsi, 0 
    jle one
    cmp rsi, 1
    je value
    mov r12, rdi
    mov rcx, rsi
    jmp npower

value:
    mov rax, rdi
    ret

npower:
    mov rax, r12
    mov rdx, rdi
    mul r12
    dec rcx
    cmp rcx, 0
    je end
    jmp npower

end:
    mov rax, r12
    ret

one:
    mov rax, 1
    ret

zero:
    mov rax, 0
    ret