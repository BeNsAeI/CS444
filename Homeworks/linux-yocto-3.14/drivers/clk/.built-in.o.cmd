cmd_drivers/clk/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/clk/built-in.o drivers/clk/x86/built-in.o ; scripts/mod/modpost drivers/clk/built-in.o
