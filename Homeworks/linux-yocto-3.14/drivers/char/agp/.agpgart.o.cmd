cmd_drivers/char/agp/agpgart.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/char/agp/agpgart.o drivers/char/agp/backend.o drivers/char/agp/frontend.o drivers/char/agp/generic.o drivers/char/agp/isoch.o drivers/char/agp/compat_ioctl.o ; scripts/mod/modpost drivers/char/agp/agpgart.o
