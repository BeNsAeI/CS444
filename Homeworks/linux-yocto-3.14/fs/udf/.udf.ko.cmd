cmd_fs/udf/udf.ko := i586-poky-linux-ld -r -m elf_x86_64 -T /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/scripts/module-common.lds --build-id  -o fs/udf/udf.ko fs/udf/udf.o fs/udf/udf.mod.o
