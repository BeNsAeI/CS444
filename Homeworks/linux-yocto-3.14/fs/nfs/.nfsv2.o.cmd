cmd_fs/nfs/nfsv2.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/nfs/nfsv2.o fs/nfs/nfs2super.o fs/nfs/proc.o fs/nfs/nfs2xdr.o ; scripts/mod/modpost fs/nfs/nfsv2.o
