cmd_drivers/mtd/chips/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/mtd/chips/built-in.o drivers/mtd/chips/chipreg.o ; scripts/mod/modpost drivers/mtd/chips/built-in.o
