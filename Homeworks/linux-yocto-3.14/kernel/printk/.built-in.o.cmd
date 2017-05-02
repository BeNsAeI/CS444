cmd_kernel/printk/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o kernel/printk/built-in.o kernel/printk/printk.o ; scripts/mod/modpost kernel/printk/built-in.o
