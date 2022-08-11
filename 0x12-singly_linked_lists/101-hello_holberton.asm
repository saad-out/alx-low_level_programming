extern printf

section .text

global main

main:
	push rbp
	mov rbp, rsp

	mov rdi, msg
	call     printf WRT ..plt

	mov eax, 1
	int 0x80

section .data
	 msg     db  'Hello, Holberton', 10, 0
