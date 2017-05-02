cmd_drivers/scsi/osd/libosd.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/scsi/osd/libosd.o drivers/scsi/osd/osd_initiator.o ; scripts/mod/modpost drivers/scsi/osd/libosd.o
