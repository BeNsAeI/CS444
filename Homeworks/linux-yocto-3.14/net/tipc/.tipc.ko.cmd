cmd_net/tipc/tipc.ko := ld -r -m elf_i386 -T /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/scripts/module-common.lds --build-id  -o net/tipc/tipc.ko net/tipc/tipc.o net/tipc/tipc.mod.o
