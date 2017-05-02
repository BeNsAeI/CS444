cmd_drivers/isdn/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/isdn/built-in.o drivers/isdn/hardware/built-in.o ; scripts/mod/modpost drivers/isdn/built-in.o
