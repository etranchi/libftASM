section .text
    global _ft_strcat

_ft_strcat:
    mov rcx, 0
    jmp check

check:
    cmp [rsi + (rcx * 4)], byte 0
    je copy
    inc rcx
    jmp check

copy:
    cmp [rdi], byte 0
    je end
    mov [rsi + (rcx * 4)] , byte rdi
    add rdi, 1
    inc rcx
    jmp copy

end:
    mov rax, r15
	ret