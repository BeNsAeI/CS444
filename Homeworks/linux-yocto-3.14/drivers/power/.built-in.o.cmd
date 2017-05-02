cmd_drivers/power/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/power/built-in.o drivers/power/power_supply.o ; scripts/mod/modpost drivers/power/built-in.o
