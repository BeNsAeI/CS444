cmd_fs/debugfs/debugfs.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/debugfs/debugfs.o fs/debugfs/inode.o fs/debugfs/file.o ; scripts/mod/modpost fs/debugfs/debugfs.o
