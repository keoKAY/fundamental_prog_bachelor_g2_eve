section .data
    msg db "Hello, world!", 0xA  ; Our string, 0xA is the newline character
    len equ $ - msg             ; Length of the string

section .text
    global _start               ; Must be declared for the linker

_start:                         ; Entry point of the program
    ; Syscall to write (sys_write)
    mov eax, 1                  ; System call number for sys_write is 1 (or 4 in 32-bit)
    mov edi, 1                  ; File descriptor 1 - standard output
    mov rsi, msg                ; Message address (pointer to the string)
    mov edx, len                ; Message length
    syscall                     ; Call kernel to display the message

    ; Syscall to exit (sys_exit)
    mov eax, 60                 ; System call number for sys_exit is 60
    xor edi, edi                ; Exit status 0 (no error)
    syscall                     ; Call kernel to exit the program
