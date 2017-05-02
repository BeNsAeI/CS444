cmd_drivers/edac/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/edac/built-in.o drivers/edac/edac_stub.o ; scripts/mod/modpost drivers/edac/built-in.o
