cmd_drivers/gpu/drm/ttm/ttm_page_alloc_dma.o := gcc -Wp,-MD,drivers/gpu/drm/ttm/.ttm_page_alloc_dma.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/uapi -Iinclude/generated/uapi -include /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/linux/kconfig.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -m32 -msoft-float -mregparm=3 -freg-struct-return -mno-mmx -mno-sse -fno-pic -mpreferred-stack-boundary=2 -march=i686 -mtune=pentium3 -mtune=generic -maccumulate-outgoing-args -Wa,-mtune=generic32 -ffreestanding -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -g -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO -Iinclude/drm  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(ttm_page_alloc_dma)"  -D"KBUILD_MODNAME=KBUILD_STR(ttm)" -c -o drivers/gpu/drm/ttm/ttm_page_alloc_dma.o drivers/gpu/drm/ttm/ttm_page_alloc_dma.c

source_drivers/gpu/drm/ttm/ttm_page_alloc_dma.o := drivers/gpu/drm/ttm/ttm_page_alloc_dma.c

deps_drivers/gpu/drm/ttm/ttm_page_alloc_dma.o := \
    $(wildcard include/config/swiotlb.h) \
    $(wildcard include/config/intel/iommu.h) \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/highmem.h) \

drivers/gpu/drm/ttm/ttm_page_alloc_dma.o: $(deps_drivers/gpu/drm/ttm/ttm_page_alloc_dma.o)

$(deps_drivers/gpu/drm/ttm/ttm_page_alloc_dma.o):
