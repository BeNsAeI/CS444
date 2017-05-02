cmd_drivers/pnp/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/pnp/built-in.o drivers/pnp/pnp.o drivers/pnp/pnpacpi/built-in.o ; scripts/mod/modpost drivers/pnp/built-in.o
