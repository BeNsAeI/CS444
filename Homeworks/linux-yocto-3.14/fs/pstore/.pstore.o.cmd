cmd_fs/pstore/pstore.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/pstore/pstore.o fs/pstore/inode.o fs/pstore/platform.o ; scripts/mod/modpost fs/pstore/pstore.o
