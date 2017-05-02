cmd_drivers/sfi/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/sfi/built-in.o drivers/sfi/sfi_acpi.o drivers/sfi/sfi_core.o ; scripts/mod/modpost drivers/sfi/built-in.o
