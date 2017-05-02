cmd_drivers/media/rc/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/media/rc/built-in.o drivers/media/rc/keymaps/built-in.o ; scripts/mod/modpost drivers/media/rc/built-in.o
