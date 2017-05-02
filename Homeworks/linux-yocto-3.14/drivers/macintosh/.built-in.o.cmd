cmd_drivers/macintosh/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/macintosh/built-in.o drivers/macintosh/mac_hid.o ; scripts/mod/modpost drivers/macintosh/built-in.o
