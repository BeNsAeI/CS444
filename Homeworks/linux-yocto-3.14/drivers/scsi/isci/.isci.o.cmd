cmd_drivers/scsi/isci/isci.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/scsi/isci/isci.o drivers/scsi/isci/init.o drivers/scsi/isci/phy.o drivers/scsi/isci/request.o drivers/scsi/isci/remote_device.o drivers/scsi/isci/port.o drivers/scsi/isci/host.o drivers/scsi/isci/task.o drivers/scsi/isci/probe_roms.o drivers/scsi/isci/remote_node_context.o drivers/scsi/isci/remote_node_table.o drivers/scsi/isci/unsolicited_frame_control.o drivers/scsi/isci/port_config.o ; scripts/mod/modpost drivers/scsi/isci/isci.o
