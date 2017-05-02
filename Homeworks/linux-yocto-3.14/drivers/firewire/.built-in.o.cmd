cmd_drivers/firewire/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/firewire/built-in.o drivers/firewire/init_ohci1394_dma.o ; scripts/mod/modpost drivers/firewire/built-in.o
