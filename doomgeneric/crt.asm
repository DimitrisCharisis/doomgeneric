bits 32
segment .text.startup
global _start
extern main

_start:
	; The stack grows down from the top of memory
	mov esp, top_of_memory
	call main
	hlt

top_of_memory: equ 80000h
