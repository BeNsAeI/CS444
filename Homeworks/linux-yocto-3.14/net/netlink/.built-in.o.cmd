cmd_net/netlink/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o net/netlink/built-in.o net/netlink/af_netlink.o net/netlink/genetlink.o ; scripts/mod/modpost net/netlink/built-in.o
