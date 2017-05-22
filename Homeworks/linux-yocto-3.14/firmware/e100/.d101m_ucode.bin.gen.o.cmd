cmd_firmware/e100/d101m_ucode.bin.gen.o := i586-poky-linux-gcc -Wp,-MD,firmware/e100/.d101m_ucode.bin.gen.o.d  -nostdinc -isystem /scratch/opt/sysroots/x86_64-pokysdk-linux/usr/bin/i586-poky-linux/../../lib/i586-poky-linux/gcc/i586-poky-linux/4.9.1/include -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/uapi -Iinclude/generated/uapi -include /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/linux/kconfig.h -D__KERNEL__  -D__ASSEMBLY__ -m32 -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1  -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1  -Wa,--gdwarf-2          -c -o firmware/e100/d101m_ucode.bin.gen.o firmware/e100/d101m_ucode.bin.gen.S

source_firmware/e100/d101m_ucode.bin.gen.o := firmware/e100/d101m_ucode.bin.gen.S

deps_firmware/e100/d101m_ucode.bin.gen.o := \

firmware/e100/d101m_ucode.bin.gen.o: $(deps_firmware/e100/d101m_ucode.bin.gen.o)

$(deps_firmware/e100/d101m_ucode.bin.gen.o):
