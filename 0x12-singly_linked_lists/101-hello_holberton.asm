<<<<<<< HEAD
	SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
=======
	global   main
	  extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
format: db `Hello, Holberton\n`,0

>>>>>>> 2c60e7e (6. Real programmers can write assembly code in any language)
