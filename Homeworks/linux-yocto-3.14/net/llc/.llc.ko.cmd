cmd_net/llc/llc.ko := ld -r -m elf_i386 -T /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/scripts/module-common.lds --build-id  -o net/llc/llc.ko net/llc/llc.o net/llc/llc.mod.o
