cmd_drivers/hid/built-in.o :=  ld -m elf_i386   -r -o drivers/hid/built-in.o drivers/hid/hid.o drivers/hid/hid-generic.o drivers/hid/usbhid/built-in.o 
