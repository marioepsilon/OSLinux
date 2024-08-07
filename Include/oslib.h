#pragma once

extern unsigned long _syscall(int num, void *a0, void *a1, void *a2, void *a3, void *a4, void *a5);

extern unsigned long sys_open(char *fn, unsigned long flags);
extern unsigned long sys_read(unsigned long fd, char *buff, unsigned long size);

extern unsigned long str_len(char *sz);
extern void str_print(char *str);

extern void delay(long int ticks);
