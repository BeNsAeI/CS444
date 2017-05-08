cmd_net/802/psnap.ko := ld -r -m elf_i386 -T /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/scripts/module-common.lds --build-id  -o net/802/psnap.ko net/802/psnap.o net/802/psnap.mod.o
