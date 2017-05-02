cmd_net/packet/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o net/packet/built-in.o net/packet/af_packet.o ; scripts/mod/modpost net/packet/built-in.o
