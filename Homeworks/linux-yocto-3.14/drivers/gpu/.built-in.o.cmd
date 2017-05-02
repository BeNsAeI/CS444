cmd_drivers/gpu/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/gpu/built-in.o drivers/gpu/drm/built-in.o drivers/gpu/vga/built-in.o ; scripts/mod/modpost drivers/gpu/built-in.o
