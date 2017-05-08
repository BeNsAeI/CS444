cmd_crypto/ccm.ko := ld -r -m elf_i386 -T /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/scripts/module-common.lds --build-id  -o crypto/ccm.ko crypto/ccm.o crypto/ccm.mod.o
