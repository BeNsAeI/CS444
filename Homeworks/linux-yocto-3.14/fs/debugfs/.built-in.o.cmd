cmd_fs/debugfs/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o fs/debugfs/built-in.o fs/debugfs/debugfs.o ; scripts/mod/modpost fs/debugfs/built-in.o
