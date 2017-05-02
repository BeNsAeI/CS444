cmd_drivers/mmc/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/mmc/built-in.o drivers/mmc/host/built-in.o ; scripts/mod/modpost drivers/mmc/built-in.o
