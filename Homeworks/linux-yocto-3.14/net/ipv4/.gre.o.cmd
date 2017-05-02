cmd_net/ipv4/gre.o := i586-poky-linux-ld -m elf_x86_64   -r -o net/ipv4/gre.o net/ipv4/gre_demux.o ; scripts/mod/modpost net/ipv4/gre.o
