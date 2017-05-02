cmd_drivers/scsi/sd_mod.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/scsi/sd_mod.o drivers/scsi/sd.o drivers/scsi/sd_dif.o ; scripts/mod/modpost drivers/scsi/sd_mod.o
