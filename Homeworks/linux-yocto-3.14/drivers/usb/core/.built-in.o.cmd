cmd_drivers/usb/core/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/usb/core/built-in.o drivers/usb/core/usbcore.o ; scripts/mod/modpost drivers/usb/core/built-in.o
