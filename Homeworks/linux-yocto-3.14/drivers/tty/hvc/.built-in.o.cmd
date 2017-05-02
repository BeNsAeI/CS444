cmd_drivers/tty/hvc/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/tty/hvc/built-in.o drivers/tty/hvc/hvc_console.o ; scripts/mod/modpost drivers/tty/hvc/built-in.o
