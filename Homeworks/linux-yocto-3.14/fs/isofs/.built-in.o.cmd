cmd_fs/isofs/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o fs/isofs/built-in.o fs/isofs/isofs.o ; scripts/mod/modpost fs/isofs/built-in.o
