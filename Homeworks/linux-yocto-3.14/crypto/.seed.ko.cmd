cmd_crypto/seed.ko := i586-poky-linux-ld -r -m elf_x86_64 -T /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/scripts/module-common.lds --build-id  -o crypto/seed.ko crypto/seed.o crypto/seed.mod.o
