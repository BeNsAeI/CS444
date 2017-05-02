cmd_net/can/can.o := i586-poky-linux-ld -m elf_x86_64   -r -o net/can/can.o net/can/af_can.o net/can/proc.o ; scripts/mod/modpost net/can/can.o
