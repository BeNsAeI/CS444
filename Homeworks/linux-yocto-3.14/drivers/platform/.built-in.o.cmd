cmd_drivers/platform/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/platform/built-in.o drivers/platform/x86/built-in.o ; scripts/mod/modpost drivers/platform/built-in.o
