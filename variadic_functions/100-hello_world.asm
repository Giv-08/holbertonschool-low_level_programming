section .data
    hello db 'Hello, world!', 0

section .text
    global _start

_start:
    ; Write 'Hello, world!' to stdout
    mov rax, 1          ; syscall number for sys_write
    mov rdi, 1          ; file descriptor 1 is stdout
    mov rsi, hello      ; address of string to output
    mov rdx, 13         ; number of bytes
    syscall

    ; Exit
    mov rax, 60         ; syscall number for sys_exit
    xor rdi, rdi        ; exit code 0
    syscall
