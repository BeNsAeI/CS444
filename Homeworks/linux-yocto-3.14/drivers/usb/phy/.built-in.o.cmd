cmd_drivers/usb/phy/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/usb/phy/built-in.o drivers/usb/phy/phy.o ; scripts/mod/modpost drivers/usb/phy/built-in.o
