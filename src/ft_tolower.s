section .text
    global _ft_tolower

_ft_tolower:
    sub rdi, 32
    ret