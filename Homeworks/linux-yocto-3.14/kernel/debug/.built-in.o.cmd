cmd_kernel/debug/built-in.o :=  i586-poky-linux-ld -m elf_i386   -r -o kernel/debug/built-in.o kernel/debug/debug_core.o kernel/debug/gdbstub.o kernel/debug/kdb/built-in.o 
