cmd_drivers/pps/pps_core.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/pps/pps_core.o drivers/pps/pps.o drivers/pps/kapi.o drivers/pps/sysfs.o ; scripts/mod/modpost drivers/pps/pps_core.o
