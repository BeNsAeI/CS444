cmd_drivers/mtd/nand/nand.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/mtd/nand/nand.o drivers/mtd/nand/nand_base.o drivers/mtd/nand/nand_bbt.o ; scripts/mod/modpost drivers/mtd/nand/nand.o
