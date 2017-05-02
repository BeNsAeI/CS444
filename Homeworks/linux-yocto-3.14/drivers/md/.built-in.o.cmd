cmd_drivers/md/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/md/built-in.o drivers/md/md-mod.o drivers/md/dm-builtin.o ; scripts/mod/modpost drivers/md/built-in.o
