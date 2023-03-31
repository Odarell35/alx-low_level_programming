section .data
    message db "Hello, Holberton", 0Ah ; 0Ah is the ASCII code for a new line character
    format db "%s", 10, 0
section .text
extern printf
    global _start
    
_start:
    ; print the message
    mov esi, message
	mov edi, format
	mov eax, 0
	call printf

	mov eax, 0
	ret
