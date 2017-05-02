cmd_drivers/acpi/acpica/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/acpi/acpica/built-in.o drivers/acpi/acpica/acpi.o ; scripts/mod/modpost drivers/acpi/acpica/built-in.o
