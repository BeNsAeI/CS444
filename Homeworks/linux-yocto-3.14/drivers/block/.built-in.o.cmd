cmd_drivers/block/built-in.o :=  ld -m elf_i386   -r -o drivers/block/built-in.o drivers/block/brd.o drivers/block/loop.o drivers/block/virtio_blk.o 
