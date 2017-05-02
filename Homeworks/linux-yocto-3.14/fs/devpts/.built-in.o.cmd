cmd_fs/devpts/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o fs/devpts/built-in.o fs/devpts/devpts.o ; scripts/mod/modpost fs/devpts/built-in.o
