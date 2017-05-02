cmd_drivers/ata/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/ata/built-in.o drivers/ata/libata.o ; scripts/mod/modpost drivers/ata/built-in.o
