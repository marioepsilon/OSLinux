// https://www.youtube.com/watch?v=7yE_WafMOVI

.global _start
.text
_start:
    call main

.global _syscall
_syscall:
    movq %rdi, %rax 
    movq %rsi, %rdi
    movq %rdx, %rsi
    movq %rcx, %rdx
    movq %r8, %r10
    movq %r9, %r8
    movq 8(%rsp), %r9
    syscall
    ret
    