cmd_drivers/net/wireless/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/net/wireless/built-in.o drivers/net/wireless/ti/built-in.o ; scripts/mod/modpost drivers/net/wireless/built-in.o
