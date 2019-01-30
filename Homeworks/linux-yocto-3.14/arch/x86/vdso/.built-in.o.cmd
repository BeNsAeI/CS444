cmd_arch/x86/vdso/built-in.o :=  i586-poky-linux-ld -m elf_i386   -r -o arch/x86/vdso/built-in.o arch/x86/vdso/vdso32.o arch/x86/vdso/vdso32-setup.o arch/x86/vdso/vdso32-syms.lds 
