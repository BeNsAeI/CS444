cmd_drivers/usb/serial/built-in.o :=  ld -m elf_i386   -r -o drivers/usb/serial/built-in.o drivers/usb/serial/usbserial.o drivers/usb/serial/ftdi_sio.o drivers/usb/serial/pl2303.o 
