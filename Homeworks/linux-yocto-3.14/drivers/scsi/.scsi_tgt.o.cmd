cmd_drivers/scsi/scsi_tgt.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/scsi/scsi_tgt.o drivers/scsi/scsi_tgt_lib.o drivers/scsi/scsi_tgt_if.o ; scripts/mod/modpost drivers/scsi/scsi_tgt.o
