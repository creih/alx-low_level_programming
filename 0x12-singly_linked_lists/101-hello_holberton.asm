section .data
	hello db 'Hello, Holberton', 0
	format db '%s', 0
section .text
	extern printf
	extern fflush
	global main
main:
	sub rsp, 8
	; Prepare the arguments for printf
	mov rdi, format
	mov rsi, hello
	; Call printf
	call printf
	call fflush
	add rsp, 8
	; Exit the program
	mov eax, 0
	ret
