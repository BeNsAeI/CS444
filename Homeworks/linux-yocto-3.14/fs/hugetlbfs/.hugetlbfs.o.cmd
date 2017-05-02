cmd_fs/hugetlbfs/hugetlbfs.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/hugetlbfs/hugetlbfs.o fs/hugetlbfs/inode.o ; scripts/mod/modpost fs/hugetlbfs/hugetlbfs.o
