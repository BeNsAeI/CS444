cmd_arch/x86/boot/voffset.h := i586-poky-linux-nm vmlinux | sed -n -e 's/^\([0-9a-fA-F]*\) . \(_text\|_end\)$$/\#define VO_\2 0x\1/p' > arch/x86/boot/voffset.h
