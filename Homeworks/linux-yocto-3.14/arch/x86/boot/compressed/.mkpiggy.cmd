cmd_arch/x86/boot/compressed/mkpiggy := gcc -Wp,-MD,arch/x86/boot/compressed/.mkpiggy.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer   -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/tools/include  -o arch/x86/boot/compressed/mkpiggy arch/x86/boot/compressed/mkpiggy.c  

source_arch/x86/boot/compressed/mkpiggy := arch/x86/boot/compressed/mkpiggy.c

deps_arch/x86/boot/compressed/mkpiggy := \
  /usr/include/stdlib.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stddef.h \
  /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h \
  /usr/include/endian.h \
  /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/include/sys/types.h \
  /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h \
  /usr/include/time.h \
  /usr/include/sys/select.h \
  /usr/include/bits/select.h \
  /usr/include/bits/sigset.h \
  /usr/include/bits/time.h \
  /usr/include/sys/sysmacros.h \
  /usr/include/bits/pthreadtypes.h \
  /usr/include/alloca.h \
  /usr/include/stdio.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stdarg.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \
  /usr/include/bits/stdio.h \
  /usr/include/string.h \
  /usr/include/xlocale.h \
  /usr/include/bits/string.h \
  /usr/include/bits/string2.h \
  /usr/include/inttypes.h \
  /usr/include/stdint.h \
  /usr/include/bits/wchar.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/tools/include/tools/le_byteshift.h \

arch/x86/boot/compressed/mkpiggy: $(deps_arch/x86/boot/compressed/mkpiggy)

$(deps_arch/x86/boot/compressed/mkpiggy):
