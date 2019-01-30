cmd_lib/crc8.ko := i586-poky-linux-ld -r -m elf_i386 -T /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/scripts/module-common.lds --build-id  -o lib/crc8.ko lib/crc8.o lib/crc8.mod.o
