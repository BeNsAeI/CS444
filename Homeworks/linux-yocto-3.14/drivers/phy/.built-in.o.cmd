cmd_drivers/phy/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/phy/built-in.o drivers/phy/phy-core.o ; scripts/mod/modpost drivers/phy/built-in.o
