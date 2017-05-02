cmd_drivers/media/i2c/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/media/i2c/built-in.o drivers/media/i2c/soc_camera/built-in.o ; scripts/mod/modpost drivers/media/i2c/built-in.o
