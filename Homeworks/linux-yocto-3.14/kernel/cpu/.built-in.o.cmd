cmd_kernel/cpu/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o kernel/cpu/built-in.o kernel/cpu/idle.o ; scripts/mod/modpost kernel/cpu/built-in.o
