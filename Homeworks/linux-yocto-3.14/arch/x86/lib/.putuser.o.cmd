cmd_arch/x86/lib/putuser.o := gcc -Wp,-MD,arch/x86/lib/.putuser.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/uapi -Iinclude/generated/uapi -include /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/linux/kconfig.h -D__KERNEL__  -D__ASSEMBLY__ -m32 -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1  -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1   -Wa,--gdwarf-2          -c -o arch/x86/lib/putuser.o arch/x86/lib/putuser.S

source_arch/x86/lib/putuser.o := arch/x86/lib/putuser.S

deps_arch/x86/lib/putuser.o := \
    $(wildcard include/config/x86/32.h) \
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
    $(wildcard include/config/x86/64.h) \
    $(wildcard include/config/x86/alignment/16.h) \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/dwarf2.h \
    $(wildcard include/config/as/cfi.h) \
    $(wildcard include/config/as/cfi/signal/frame.h) \
    $(wildcard include/config/as/cfi/sections.h) \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/thread_info.h \
    $(wildcard include/config/ia32/emulation.h) \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/page.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/uapi/asm/types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/page_types.h \
    $(wildcard include/config/physical/start.h) \
    $(wildcard include/config/physical/align.h) \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/uapi/linux/const.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/page_32_types.h \
    $(wildcard include/config/highmem4g.h) \
    $(wildcard include/config/highmem64g.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/x86/pae.h) \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/page_32.h \
    $(wildcard include/config/debug/virtual.h) \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/x86/use/3dnow.h) \
    $(wildcard include/config/x86/3dnow.h) \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  include/asm-generic/getorder.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/uapi/asm/errno.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/uapi/asm-generic/errno.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/uapi/asm-generic/errno-base.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/asm.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/smap.h \
    $(wildcard include/config/x86/smap.h) \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/nops.h \
    $(wildcard include/config/mk7.h) \
    $(wildcard include/config/x86/p6/nop.h) \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/cpufeature.h \
    $(wildcard include/config/x86/debug/static/cpu/has.h) \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/required-features.h \
    $(wildcard include/config/x86/minimum/cpu/family.h) \
    $(wildcard include/config/math/emulation.h) \
    $(wildcard include/config/x86/cmpxchg64.h) \
    $(wildcard include/config/x86/cmov.h) \
    $(wildcard include/config/matom.h) \
    $(wildcard include/config/paravirt.h) \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/alternative-asm.h \
    $(wildcard include/config/smp.h) \

arch/x86/lib/putuser.o: $(deps_arch/x86/lib/putuser.o)

$(deps_arch/x86/lib/putuser.o):
