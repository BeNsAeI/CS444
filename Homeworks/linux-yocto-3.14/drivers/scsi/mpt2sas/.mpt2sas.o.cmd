cmd_drivers/scsi/mpt2sas/mpt2sas.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/scsi/mpt2sas/mpt2sas.o drivers/scsi/mpt2sas/mpt2sas_base.o drivers/scsi/mpt2sas/mpt2sas_config.o drivers/scsi/mpt2sas/mpt2sas_scsih.o drivers/scsi/mpt2sas/mpt2sas_transport.o drivers/scsi/mpt2sas/mpt2sas_ctl.o ; scripts/mod/modpost drivers/scsi/mpt2sas/mpt2sas.o
