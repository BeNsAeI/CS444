cmd_drivers/thermal/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/thermal/built-in.o drivers/thermal/thermal_sys.o drivers/thermal/samsung/built-in.o ; scripts/mod/modpost drivers/thermal/built-in.o
