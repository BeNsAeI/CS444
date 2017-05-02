cmd_drivers/usb/mon/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/usb/mon/built-in.o drivers/usb/mon/usbmon.o ; scripts/mod/modpost drivers/usb/mon/built-in.o
