cmd_net/8021q/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o net/8021q/built-in.o net/8021q/vlan_core.o ; scripts/mod/modpost net/8021q/built-in.o
