cmd_usr/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o usr/built-in.o usr/initramfs_data.o ; scripts/mod/modpost usr/built-in.o
