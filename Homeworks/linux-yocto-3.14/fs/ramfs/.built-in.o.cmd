cmd_fs/ramfs/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o fs/ramfs/built-in.o fs/ramfs/ramfs.o ; scripts/mod/modpost fs/ramfs/built-in.o
