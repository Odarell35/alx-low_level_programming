section .data
    message db 'Hello, Holberton', 0Ah ; message to be printed

section .text
    global _start

_start:
    ; write message to stdout
    mov eax, 4      ; syscall write
    mov ebx, 1      ; file descriptor stdout
    mov ecx, message    ; message to be printed
    mov edx, 16     ; message length
    int 0x80        ; call kernel

    ; exit program
    mov eax, 1      ; syscall exit
    xor ebx, ebx    ; return code 0
    int 0x80        ; call kernel

