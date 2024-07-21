section .data
    hello db 'Hello, world!', 0x0A  ; 0x0A is the newline character
    hello_len equ $ - hello          ; Length of the string including the newline

section .text
    global _start

_start:
    ; Write 'Hello, world!' to stdout
    mov rax, 1              ; syscall number for sys_write
    mov rdi, 1              ; file descriptor 1 is stdout
    mov rsi, hello          ; address of string to output
    mov rdx, hello_len      ; number of bytes
    syscall

    ; Exit
    mov rax, 60             ; syscall number for sys_exit
    xor rdi, rdi            ; exit code 0
    syscall
