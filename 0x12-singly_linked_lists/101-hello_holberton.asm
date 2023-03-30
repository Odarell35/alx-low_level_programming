section .data
    message db 'Hello, Holberton', 0Ah ; 0Ah is the ASCII code for a new line character
    
section .text
    global _start
    
_start:
    ; print the message
    mov rax, 4          ; system call for write
    mov rbx, 1          ; file descriptor for stdout
    mov rcx, message    ; address of message to print
    mov rdx, 16         ; number of bytes to print (including the newline character)
    int 0x80            ; invoke the system call
    
    ; exit the program
    mov rax, 1          ; system call for exit
    xor rbx, rbx        ; return code of 0
    int 0x80            ; invoke the system call

