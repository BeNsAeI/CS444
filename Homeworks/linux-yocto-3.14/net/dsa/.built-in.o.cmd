cmd_net/dsa/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o net/dsa/built-in.o net/dsa/dsa_core.o ; scripts/mod/modpost net/dsa/built-in.o
