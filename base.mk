SHELL ?= /bin/sh
CC ?= gcc
FLAGS ?= -nostdlib -I../Include
OSL_PATH ?= /mnt/OSL
DESTDIR ?= /mnt/OSL

PREFIX ?= $(DESTDIR)
BINDIR ?= $(PREFIX)/sbin

%_c.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

%_s.o: %.S
	$(CC) $(FLAGS) -c $< -o $@

install:
	cp $(TARGET) $(BINDIR)/

clean:
	rm *.o $(TARGET)