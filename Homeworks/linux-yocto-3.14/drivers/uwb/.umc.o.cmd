cmd_drivers/uwb/umc.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/uwb/umc.o drivers/uwb/umc-bus.o drivers/uwb/umc-dev.o drivers/uwb/umc-drv.o ; scripts/mod/modpost drivers/uwb/umc.o
