cmd_fs/cramfs/cramfs.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/cramfs/cramfs.o fs/cramfs/inode.o fs/cramfs/uncompress.o ; scripts/mod/modpost fs/cramfs/cramfs.o
