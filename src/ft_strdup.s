
section .text
    global _ft_strdup
    extern _ft_strlen
    extern _malloc
    extern _ft_memcpy
    

_ft_strdup:
    mov rsi, rdi    ; keep source
    call _ft_strlen ; get len
    inc rax         ; add '\0'
    push rbp        ; align
    mov rbp, rsp    ; on
    sub rsp, 16     ; 16
    mov rdi, rax    ; put len
    call _malloc
    leave
    test rax, rax   ; check
    jz fail
    mov rdx, rdi
    mov rdi, rax
    ret
    call _ft_memcpy
    ret

fail:
    mov rax, 0
    ret