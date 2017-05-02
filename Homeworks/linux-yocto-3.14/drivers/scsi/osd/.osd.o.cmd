cmd_drivers/scsi/osd/osd.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/scsi/osd/osd.o drivers/scsi/osd/osd_uld.o ; scripts/mod/modpost drivers/scsi/osd/osd.o
