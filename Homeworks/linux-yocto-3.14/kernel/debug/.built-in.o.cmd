cmd_kernel/debug/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o kernel/debug/built-in.o kernel/debug/debug_core.o kernel/debug/gdbstub.o ; scripts/mod/modpost kernel/debug/built-in.o
