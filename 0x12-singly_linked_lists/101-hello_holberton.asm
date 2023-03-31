section .data
	hello db 'Hello, Holberton,', 0
	fmt db '%s\n', 0

section .text
	global main

main:
	; prepare the stack for calling printf
	push hello
	push fmt
	call printf
	add rsp, 16  ; remove arguments from the stack

	; exit the program with status code 0
	xor edi, edi
	mov eax, 60 ; system call for exit
	syscall

