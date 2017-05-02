cmd_drivers/usb/early/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/usb/early/built-in.o drivers/usb/early/ehci-dbgp.o ; scripts/mod/modpost drivers/usb/early/built-in.o
