cmd_arch/x86/crypto/crct10dif-pcl-asm_64.o := i586-poky-linux-gcc -Wp,-MD,arch/x86/crypto/.crct10dif-pcl-asm_64.o.d  -nostdinc -isystem /scratch/opt/sysroots/x86_64-pokysdk-linux/usr/bin/i586-poky-linux/../../lib/i586-poky-linux/gcc/i586-poky-linux/4.9.1/include -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/uapi -Iinclude/generated/uapi -include /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/linux/kconfig.h -D__KERNEL__  -D__ASSEMBLY__ -m64 -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1  -Wa,--gdwarf-2  -mfentry -DCC_USING_FENTRY        -DMODULE  -c -o arch/x86/crypto/crct10dif-pcl-asm_64.o arch/x86/crypto/crct10dif-pcl-asm_64.S

source_arch/x86/crypto/crct10dif-pcl-asm_64.o := arch/x86/crypto/crct10dif-pcl-asm_64.S

deps_arch/x86/crypto/crct10dif-pcl-asm_64.o := \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/linkage.h \
    $(wildcard include/config/x86/32.h) \
    $(wildcard include/config/x86/64.h) \
    $(wildcard include/config/x86/alignment/16.h) \

arch/x86/crypto/crct10dif-pcl-asm_64.o: $(deps_arch/x86/crypto/crct10dif-pcl-asm_64.o)

$(deps_arch/x86/crypto/crct10dif-pcl-asm_64.o):
