cmd_security/selinux/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o security/selinux/built-in.o security/selinux/selinux.o ; scripts/mod/modpost security/selinux/built-in.o
