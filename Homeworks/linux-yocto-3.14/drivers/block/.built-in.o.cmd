cmd_drivers/block/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/block/built-in.o drivers/block/brd.o drivers/block/loop.o ; scripts/mod/modpost drivers/block/built-in.o
