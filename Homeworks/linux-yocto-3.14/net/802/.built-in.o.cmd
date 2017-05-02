cmd_net/802/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o net/802/built-in.o net/802/fc.o net/802/fddi.o ; scripts/mod/modpost net/802/built-in.o
