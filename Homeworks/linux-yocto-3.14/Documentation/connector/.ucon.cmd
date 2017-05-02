cmd_Documentation/connector/ucon := gcc -Wp,-MD,Documentation/connector/.ucon.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer    -I/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include -o Documentation/connector/ucon Documentation/connector/ucon.c  

source_Documentation/connector/ucon := Documentation/connector/ucon.c

deps_Documentation/connector/ucon := \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/int-ll64.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/bitsperlong.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /usr/include/sys/types.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-64.h \
  /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h \
  /usr/include/time.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stddef.h \
  /usr/include/endian.h \
  /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/include/sys/select.h \
  /usr/include/bits/select.h \
  /usr/include/bits/sigset.h \
  /usr/include/bits/time.h \
  /usr/include/sys/sysmacros.h \
  /usr/include/bits/pthreadtypes.h \
  /usr/include/sys/socket.h \
  /usr/include/sys/uio.h \
  /usr/include/bits/uio.h \
  /usr/include/bits/socket.h \
  /usr/include/bits/sockaddr.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/socket.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/socket.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/sockios.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/sockios.h \
  /usr/include/sys/poll.h \
  /usr/include/bits/poll.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/netlink.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/kernel.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/sysinfo.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/posix_types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/stddef.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/posix_types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/posix_types_64.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/posix_types.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/socket.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/rtnetlink.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/if_link.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/if_addr.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/neighbour.h \
  /usr/include/arpa/inet.h \
  /usr/include/netinet/in.h \
  /usr/include/stdint.h \
  /usr/include/bits/wchar.h \
  /usr/include/bits/in.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stdbool.h \
  /usr/include/stdio.h \
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
  /usr/include/alloca.h \
  /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h \
  /usr/include/bits/confname.h \
  /usr/include/getopt.h \
  /usr/include/string.h \
  /usr/include/xlocale.h \
  /usr/include/bits/string.h \
  /usr/include/bits/string2.h \
  /usr/include/errno.h \
  /usr/include/bits/errno.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/errno.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm/errno.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/errno.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/asm-generic/errno-base.h \
  /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/usr/include/linux/connector.h \

Documentation/connector/ucon: $(deps_Documentation/connector/ucon)

$(deps_Documentation/connector/ucon):
