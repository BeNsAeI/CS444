cmd_arch/x86/boot/vmlinux.bin := i586-poky-linux-objcopy  -O binary -R .note -R .comment -S arch/x86/boot/compressed/vmlinux arch/x86/boot/vmlinux.bin
