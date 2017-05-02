cmd_drivers/hid/usbhid/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/hid/usbhid/built-in.o drivers/hid/usbhid/usbhid.o ; scripts/mod/modpost drivers/hid/usbhid/built-in.o
