all:
	clear
	#source /scratch/opt/environment-setup-i586-poky-linux.csh
	#source /scratch/opt/environment-setup-i586-poky-linux.csh 
	#qemu-system-i386 -gdb tcp::6503 -S -nographic -kernel bzImage-qemux86.bin -drive file=core-image-lsb-sdk-qemux86.ext3,if=virtio -enable-kvm -net none -usb -localtime --no-reboot --append "root=/dev/vda rw console=ttyS0 debug"
our:
	qemu-system-i386 -gdb tcp::6503 -S -nographic -kernel /scratch/spring2017/10-03/linux-yocto-3.14/arch/x86/boot/bzImage -drive file=core-image-lsb-sdk-qemux86.ext3,if=virtio -enable-kvm -net none -usb -localtime --no-reboot --append "root=/dev/vda rw console=ttyS0 debug"
vm:
	qemu-system-i386 -gdb tcp::6503 -S -nographic -kernel /scratch/spring2017/10-03/linux-yocto-3.14/arch/x86/boot/bzImage -drive file=core-image-lsb-sdk-qemux86.ext3 -enable-kvm -net none -usb -localtime --no-reboot --append "root=/dev/vda rw console=ttyS0 debug"
build:
	make -j4 our
myEnv:
	ln -s /usr/include/asm-generic /usr/include/asm
