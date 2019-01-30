cmd_arch/x86/vdso/vdso32/vdso32.lds := i586-poky-linux-gcc -E -Wp,-MD,arch/x86/vdso/vdso32/.vdso32.lds.d  -nostdinc -isystem /scratch/opt/sysroots/x86_64-pokysdk-linux/usr/bin/i586-poky-linux/../../lib/i586-poky-linux/gcc/i586-poky-linux/4.9.1/include -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/uapi -Iinclude/generated/uapi -include /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/linux/kconfig.h -D__KERNEL__    -P -C -P -C -Ux86 -D__ASSEMBLY__ -DLINKER_SCRIPT -o arch/x86/vdso/vdso32/vdso32.lds arch/x86/vdso/vdso32/vdso32.lds.S

source_arch/x86/vdso/vdso32/vdso32.lds := arch/x86/vdso/vdso32/vdso32.lds.S

deps_arch/x86/vdso/vdso32/vdso32.lds := \
  arch/x86/vdso/vdso32/../vdso-layout.lds.S \

arch/x86/vdso/vdso32/vdso32.lds: $(deps_arch/x86/vdso/vdso32/vdso32.lds)

$(deps_arch/x86/vdso/vdso32/vdso32.lds):
