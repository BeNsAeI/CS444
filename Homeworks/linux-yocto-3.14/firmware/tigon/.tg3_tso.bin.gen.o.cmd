cmd_firmware/tigon/tg3_tso.bin.gen.o := gcc -Wp,-MD,firmware/tigon/.tg3_tso.bin.gen.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/uapi -Iinclude/generated/uapi -include /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/linux/kconfig.h -D__KERNEL__  -D__ASSEMBLY__ -m32 -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1  -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1   -Wa,--gdwarf-2          -c -o firmware/tigon/tg3_tso.bin.gen.o firmware/tigon/tg3_tso.bin.gen.S

source_firmware/tigon/tg3_tso.bin.gen.o := firmware/tigon/tg3_tso.bin.gen.S

deps_firmware/tigon/tg3_tso.bin.gen.o := \

firmware/tigon/tg3_tso.bin.gen.o: $(deps_firmware/tigon/tg3_tso.bin.gen.o)

$(deps_firmware/tigon/tg3_tso.bin.gen.o):
