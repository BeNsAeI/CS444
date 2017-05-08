cmd_crypto/anubis.ko := ld -r -m elf_i386 -T /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/scripts/module-common.lds --build-id  -o crypto/anubis.ko crypto/anubis.o crypto/anubis.mod.o
