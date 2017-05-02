cmd_fs/exofs/libore.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/exofs/libore.o fs/exofs/ore.o fs/exofs/ore_raid.o ; scripts/mod/modpost fs/exofs/libore.o
