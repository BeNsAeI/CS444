cmd_fs/devpts/devpts.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/devpts/devpts.o fs/devpts/inode.o ; scripts/mod/modpost fs/devpts/devpts.o
