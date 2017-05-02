cmd_fs/fat/vfat.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/fat/vfat.o fs/fat/namei_vfat.o ; scripts/mod/modpost fs/fat/vfat.o
