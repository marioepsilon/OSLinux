#include <syscall.h>
#include <oslib.h>

unsigned long sys_open(char *fn, unsigned long flags) {
    return _syscall(SYS_open, fn, (void *)flags, 0, 0, 0, 0);
}

unsigned long sys_read(unsigned long fd, char *buff, unsigned long size) {
    return _syscall(SYS_read, (void *)fd, buff, (void *)size, 0, 0, 0);
}
