cmd_drivers/idle/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/idle/built-in.o drivers/idle/intel_idle.o ; scripts/mod/modpost drivers/idle/built-in.o
