cmd_drivers/hsi/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/hsi/built-in.o drivers/hsi/clients/built-in.o ; scripts/mod/modpost drivers/hsi/built-in.o
