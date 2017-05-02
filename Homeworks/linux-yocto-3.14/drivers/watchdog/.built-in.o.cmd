cmd_drivers/watchdog/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/watchdog/built-in.o drivers/watchdog/watchdog.o ; scripts/mod/modpost drivers/watchdog/built-in.o
