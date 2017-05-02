cmd_drivers/hwmon/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/hwmon/built-in.o drivers/hwmon/hwmon.o ; scripts/mod/modpost drivers/hwmon/built-in.o
