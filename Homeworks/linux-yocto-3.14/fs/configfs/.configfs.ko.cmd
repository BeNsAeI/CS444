cmd_fs/configfs/configfs.ko := i586-poky-linux-ld -r -m elf_i386 -T /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/scripts/module-common.lds --build-id  -o fs/configfs/configfs.ko fs/configfs/configfs.o fs/configfs/configfs.mod.o
