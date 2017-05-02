cmd_Documentation/pcmcia/crc32hash := gcc -Wp,-MD,Documentation/pcmcia/.crc32hash.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer    -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include -o Documentation/pcmcia/crc32hash Documentation/pcmcia/crc32hash.c  

source_Documentation/pcmcia/crc32hash := Documentation/pcmcia/crc32hash.c

deps_Documentation/pcmcia/crc32hash := \
  /usr/include/string.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stddef.h \
  /usr/include/xlocale.h \
  /usr/include/bits/string.h \
  /usr/include/bits/string2.h \
  /usr/include/endian.h \
  /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h \
  /usr/include/stdlib.h \
  /usr/include/stdio.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stdarg.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \
  /usr/include/bits/stdio.h \
  /usr/include/ctype.h \
  /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h \
  /usr/include/sys/types.h \
  /usr/include/time.h \
  /usr/include/sys/select.h \
  /usr/include/bits/select.h \
  /usr/include/bits/sigset.h \
  /usr/include/bits/time.h \
  /usr/include/sys/sysmacros.h \
  /usr/include/bits/pthreadtypes.h \
  /usr/include/alloca.h \

Documentation/pcmcia/crc32hash: $(deps_Documentation/pcmcia/crc32hash)

$(deps_Documentation/pcmcia/crc32hash):
