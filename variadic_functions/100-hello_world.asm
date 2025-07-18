section .data
	msg db "Hello, World", 10      ; 10 = saut de ligne
	len equ $ - msg

	section .text
	global main
	extern write, exit

main:
				; Appel write(1, msg, len)
	mov edi, 1         ; int fd = 1 (stdout)
	mov rsi, msg       ; const void *buf = msg
	mov edx, len       ; size_t count = len
	call write

	; Appel exit(0)
	xor edi, edi       ; int status = 0
	call exit
