cmd_drivers/message/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/message/built-in.o drivers/message/fusion/built-in.o ; scripts/mod/modpost drivers/message/built-in.o
