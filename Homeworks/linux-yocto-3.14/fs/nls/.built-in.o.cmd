cmd_fs/nls/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o fs/nls/built-in.o fs/nls/nls_base.o fs/nls/nls_cp437.o fs/nls/nls_ascii.o ; scripts/mod/modpost fs/nls/built-in.o
