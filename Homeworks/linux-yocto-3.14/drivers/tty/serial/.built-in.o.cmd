cmd_drivers/tty/serial/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/tty/serial/built-in.o drivers/tty/serial/serial_core.o drivers/tty/serial/8250/built-in.o drivers/tty/serial/kgdboc.o ; scripts/mod/modpost drivers/tty/serial/built-in.o
