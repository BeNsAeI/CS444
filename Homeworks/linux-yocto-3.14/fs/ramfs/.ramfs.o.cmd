cmd_fs/ramfs/ramfs.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/ramfs/ramfs.o fs/ramfs/inode.o fs/ramfs/file-mmu.o ; scripts/mod/modpost fs/ramfs/ramfs.o
