#!/bin/bash
source /scratch/opt/environment-setup-i586-poky-linux

qemu-system-i386 -gdb tcp::6503 -S -nographic -kernel ./arch/x86/boot/bzImage  -drive file=core-image-lsb-sdk-qemux86.ext3,if=virtio -enable-kvm -net none -usb -localtime --no-reboot --append "root=/dev/vda rw console=ttyS0 debug"
