cmd_crypto/md4.ko := ld -r -m elf_i386 -T /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/scripts/module-common.lds --build-id  -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o
