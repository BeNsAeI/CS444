cmd_drivers/media/mmc/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/media/mmc/built-in.o drivers/media/mmc/siano/built-in.o ; scripts/mod/modpost drivers/media/mmc/built-in.o
