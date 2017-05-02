cmd_net/bluetooth/hidp/hidp.o := i586-poky-linux-ld -m elf_x86_64   -r -o net/bluetooth/hidp/hidp.o net/bluetooth/hidp/core.o net/bluetooth/hidp/sock.o ; scripts/mod/modpost net/bluetooth/hidp/hidp.o
