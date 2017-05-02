cmd_net/unix/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o net/unix/built-in.o net/unix/unix.o ; scripts/mod/modpost net/unix/built-in.o
