cmd_arch/x86/boot/compressed/vmlinux := i586-poky-linux-ld -m elf_x86_64   -T arch/x86/boot/compressed/vmlinux.lds arch/x86/boot/compressed/head_64.o arch/x86/boot/compressed/misc.o arch/x86/boot/compressed/string.o arch/x86/boot/compressed/cmdline.o arch/x86/boot/compressed/early_serial_console.o arch/x86/boot/compressed/piggy.o arch/x86/boot/compressed/cpuflags.o arch/x86/boot/compressed/aslr.o -o arch/x86/boot/compressed/vmlinux 
