cmd_drivers/pnp/pnpacpi/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/pnp/pnpacpi/built-in.o drivers/pnp/pnpacpi/pnp.o ; scripts/mod/modpost drivers/pnp/pnpacpi/built-in.o
