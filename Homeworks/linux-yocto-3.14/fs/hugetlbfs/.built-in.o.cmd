cmd_fs/hugetlbfs/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o fs/hugetlbfs/built-in.o fs/hugetlbfs/hugetlbfs.o ; scripts/mod/modpost fs/hugetlbfs/built-in.o
