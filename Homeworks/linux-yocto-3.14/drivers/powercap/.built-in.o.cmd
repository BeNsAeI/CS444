cmd_drivers/powercap/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/powercap/built-in.o drivers/powercap/powercap_sys.o ; scripts/mod/modpost drivers/powercap/built-in.o
