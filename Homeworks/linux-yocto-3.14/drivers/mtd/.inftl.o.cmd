cmd_drivers/mtd/inftl.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/mtd/inftl.o drivers/mtd/inftlcore.o drivers/mtd/inftlmount.o ; scripts/mod/modpost drivers/mtd/inftl.o
