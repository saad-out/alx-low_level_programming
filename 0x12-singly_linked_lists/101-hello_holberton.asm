extern printf

section .text

global main

main:
	push rbp
	mov rbp, rsp

	mov rdi, msg
	call     printf WRT ..plt

	leave
	ret

section .data
	 msg     db  'Hello, Holberton', 13, 10, 0
