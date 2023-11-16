section .data
    message db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; Call printf function
    mov rdi, 1      ; File descriptor for stdout
    lea rsi, [rel message]   ; Address of the message
    mov rax, 1      ; System call number for write
    mov rdx, 16     ; Length of the message
    syscall

    ; Exit the program
    mov eax, 60     ; System call number for exit
    xor edi, edi    ; Exit status 0
    syscall
