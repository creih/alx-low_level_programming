section .data
	hello db 'Hello, Holberton', 0
	format db '%s', 0
section .text
	global main
main:
	; Prepare the arguments for printf
	mov rdi, format
	mov rsi, hello
	; Call printf
	call printf
	; Exit the program
	mov eax, 0
	ret
