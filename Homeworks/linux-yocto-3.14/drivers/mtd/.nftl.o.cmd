cmd_drivers/mtd/nftl.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/mtd/nftl.o drivers/mtd/nftlcore.o drivers/mtd/nftlmount.o ; scripts/mod/modpost drivers/mtd/nftl.o
