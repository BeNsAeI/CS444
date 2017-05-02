cmd_drivers/vhost/vhost_net.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/vhost/vhost_net.o drivers/vhost/net.o ; scripts/mod/modpost drivers/vhost/vhost_net.o
