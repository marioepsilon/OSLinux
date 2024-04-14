#include <syscall.h>
#include <oslib.h>

void str_print(char *str) {
    _syscall(SYS_write, (void *)1 /*stdout*/, str, (void *)str_len(str), 0, 0, 0);
}

unsigned long str_len(char *sz) {
    int count = 0;

    while (*sz++) {
        count++;
    }
    
    return count;
}

void delay(long int ticks) {
    for (int i = 0; i < ticks; i++) {}
}
