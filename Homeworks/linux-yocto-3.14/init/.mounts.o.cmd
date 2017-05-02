cmd_init/mounts.o := i586-poky-linux-ld -m elf_x86_64   -r -o init/mounts.o init/do_mounts.o init/do_mounts_rd.o init/do_mounts_initrd.o init/do_mounts_md.o ; scripts/mod/modpost init/mounts.o
