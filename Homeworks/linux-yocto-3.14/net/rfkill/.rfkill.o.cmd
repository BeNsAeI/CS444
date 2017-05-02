cmd_net/rfkill/rfkill.o := i586-poky-linux-ld -m elf_x86_64   -r -o net/rfkill/rfkill.o net/rfkill/core.o net/rfkill/input.o ; scripts/mod/modpost net/rfkill/rfkill.o
