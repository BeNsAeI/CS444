cmd_drivers/dma/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/dma/built-in.o drivers/dma/dmaengine.o drivers/dma/acpi-dma.o ; scripts/mod/modpost drivers/dma/built-in.o
