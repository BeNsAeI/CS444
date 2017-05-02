cmd_Documentation/misc-devices/mei/mei-amt-version := gcc -Wp,-MD,Documentation/misc-devices/mei/.mei-amt-version.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer    -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include -o Documentation/misc-devices/mei/mei-amt-version Documentation/misc-devices/mei/mei-amt-version.c  

source_Documentation/misc-devices/mei/mei-amt-version := Documentation/misc-devices/mei/mei-amt-version.c

deps_Documentation/misc-devices/mei/mei-amt-version := \
  /usr/include/stdio.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stddef.h \
  /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stdarg.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \
  /usr/include/bits/stdio.h \
  /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h \
  /usr/include/endian.h \
  /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/include/sys/types.h \
  /usr/include/time.h \
  /usr/include/sys/select.h \
  /usr/include/bits/select.h \
  /usr/include/bits/sigset.h \
  /usr/include/bits/time.h \
  /usr/include/sys/sysmacros.h \
  /usr/include/bits/pthreadtypes.h \
  /usr/include/alloca.h \
  /usr/include/string.h \
  /usr/include/xlocale.h \
  /usr/include/bits/string.h \
  /usr/include/bits/string2.h \
  /usr/include/fcntl.h \
  /usr/include/bits/fcntl.h \
  /usr/include/bits/stat.h \
  /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/ioctls.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/ioctls.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/ioctl.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/ioctl.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h \
  /usr/include/sys/ttydefaults.h \
  /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h \
  /usr/include/bits/confname.h \
  /usr/include/getopt.h \
  /usr/include/errno.h \
  /usr/include/bits/errno.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/errno.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/errno.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/errno.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/errno-base.h \
  /usr/include/stdint.h \
  /usr/include/bits/wchar.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stdbool.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/mei.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/uuid.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/int-ll64.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/bitsperlong.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/posix_types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/stddef.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/posix_types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/posix_types_64.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/posix_types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/string.h \

Documentation/misc-devices/mei/mei-amt-version: $(deps_Documentation/misc-devices/mei/mei-amt-version)

$(deps_Documentation/misc-devices/mei/mei-amt-version):
