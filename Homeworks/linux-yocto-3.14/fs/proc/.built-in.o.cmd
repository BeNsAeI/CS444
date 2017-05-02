cmd_fs/proc/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o fs/proc/built-in.o fs/proc/proc.o ; scripts/mod/modpost fs/proc/built-in.o
