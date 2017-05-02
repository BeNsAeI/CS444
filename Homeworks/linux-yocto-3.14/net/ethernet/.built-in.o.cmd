cmd_net/ethernet/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o net/ethernet/built-in.o net/ethernet/eth.o ; scripts/mod/modpost net/ethernet/built-in.o
