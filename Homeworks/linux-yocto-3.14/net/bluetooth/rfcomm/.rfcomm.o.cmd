cmd_net/bluetooth/rfcomm/rfcomm.o := i586-poky-linux-ld -m elf_x86_64   -r -o net/bluetooth/rfcomm/rfcomm.o net/bluetooth/rfcomm/core.o net/bluetooth/rfcomm/sock.o net/bluetooth/rfcomm/tty.o ; scripts/mod/modpost net/bluetooth/rfcomm/rfcomm.o
