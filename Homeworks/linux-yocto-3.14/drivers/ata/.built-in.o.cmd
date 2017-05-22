cmd_drivers/ata/built-in.o :=  i586-poky-linux-ld -m elf_i386   -r -o drivers/ata/built-in.o drivers/ata/libata.o drivers/ata/ahci.o drivers/ata/libahci.o drivers/ata/ata_piix.o 
