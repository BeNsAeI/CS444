cmd_net/dcb/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o net/dcb/built-in.o net/dcb/dcbnl.o net/dcb/dcbevent.o ; scripts/mod/modpost net/dcb/built-in.o
