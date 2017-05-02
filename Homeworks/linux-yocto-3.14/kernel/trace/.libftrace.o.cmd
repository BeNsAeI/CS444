cmd_kernel/trace/libftrace.o := i586-poky-linux-ld -m elf_x86_64   -r -o kernel/trace/libftrace.o kernel/trace/ftrace.o ; scripts/mod/modpost kernel/trace/libftrace.o
