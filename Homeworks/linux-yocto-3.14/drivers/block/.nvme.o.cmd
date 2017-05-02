cmd_drivers/block/nvme.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/block/nvme.o drivers/block/nvme-core.o drivers/block/nvme-scsi.o ; scripts/mod/modpost drivers/block/nvme.o
