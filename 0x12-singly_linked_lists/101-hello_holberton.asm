section .data
    msg db "Hello, Holberton",0
section .text
    global main
    extern printf
main:
    push msg
    call printf
    add rsp, 8
    ret
