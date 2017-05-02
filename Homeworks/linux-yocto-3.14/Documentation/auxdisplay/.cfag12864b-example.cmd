cmd_Documentation/auxdisplay/cfag12864b-example := gcc -Wp,-MD,Documentation/auxdisplay/.cfag12864b-example.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer    -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include -o Documentation/auxdisplay/cfag12864b-example Documentation/auxdisplay/cfag12864b-example.c  

source_Documentation/auxdisplay/cfag12864b-example := Documentation/auxdisplay/cfag12864b-example.c

deps_Documentation/auxdisplay/cfag12864b-example := \
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
  /usr/include/fcntl.h \
  /usr/include/bits/fcntl.h \
  /usr/include/sys/types.h \
  /usr/include/time.h \
  /usr/include/sys/select.h \
  /usr/include/bits/select.h \
  /usr/include/bits/sigset.h \
  /usr/include/bits/time.h \
  /usr/include/sys/sysmacros.h \
  /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/stat.h \
  /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h \
  /usr/include/bits/confname.h \
  /usr/include/getopt.h \
  /usr/include/sys/stat.h \
  /usr/include/sys/mman.h \
  /usr/include/bits/mman.h \
  /usr/include/stdio.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stdarg.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \
  /usr/include/bits/stdio.h \

Documentation/auxdisplay/cfag12864b-example: $(deps_Documentation/auxdisplay/cfag12864b-example)

$(deps_Documentation/auxdisplay/cfag12864b-example):
