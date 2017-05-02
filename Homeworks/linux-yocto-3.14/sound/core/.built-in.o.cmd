cmd_sound/core/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o sound/core/built-in.o sound/core/oss/built-in.o ; scripts/mod/modpost sound/core/built-in.o
