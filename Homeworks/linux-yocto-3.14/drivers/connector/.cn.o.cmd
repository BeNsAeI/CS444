cmd_drivers/connector/cn.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/connector/cn.o drivers/connector/cn_queue.o drivers/connector/connector.o ; scripts/mod/modpost drivers/connector/cn.o
