#include <fcntl.h>
#include <oslib.h>

int main() {
    char *msg = "OSLinux 0.0.1 Initializing ....\n";
    
    delay(1000000000);

    str_print(msg);

    char buff[255];
    char *filename = "/boot/grub/grub.cfg";

    str_print("Opening file: ");
    str_print(filename);
    str_print("\n");

    unsigned long fd = sys_open(filename, O_RDONLY);

    sys_read(fd, buff, sizeof(buff));

    str_print(buff);
    
    while (1) {
        /* Even loop */
        delay(1000000000);
        str_print("TICK!\n");    
    }

    return 0;
}