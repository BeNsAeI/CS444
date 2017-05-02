cmd_fs/fuse/fuse.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/fuse/fuse.o fs/fuse/dev.o fs/fuse/dir.o fs/fuse/file.o fs/fuse/inode.o fs/fuse/control.o ; scripts/mod/modpost fs/fuse/fuse.o
