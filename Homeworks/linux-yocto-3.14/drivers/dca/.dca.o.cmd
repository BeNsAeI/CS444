cmd_drivers/dca/dca.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/dca/dca.o drivers/dca/dca-core.o drivers/dca/dca-sysfs.o ; scripts/mod/modpost drivers/dca/dca.o
