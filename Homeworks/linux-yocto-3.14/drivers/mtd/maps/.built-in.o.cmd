cmd_drivers/mtd/maps/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/mtd/maps/built-in.o drivers/mtd/maps/map_funcs.o ; scripts/mod/modpost drivers/mtd/maps/built-in.o
