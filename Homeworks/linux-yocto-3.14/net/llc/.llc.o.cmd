cmd_net/llc/llc.o := i586-poky-linux-ld -m elf_x86_64   -r -o net/llc/llc.o net/llc/llc_core.o net/llc/llc_input.o net/llc/llc_output.o ; scripts/mod/modpost net/llc/llc.o
