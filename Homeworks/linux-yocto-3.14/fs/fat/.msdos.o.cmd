cmd_fs/fat/msdos.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/fat/msdos.o fs/fat/namei_msdos.o ; scripts/mod/modpost fs/fat/msdos.o
