cmd_fs/udf/udf.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/udf/udf.o fs/udf/balloc.o fs/udf/dir.o fs/udf/file.o fs/udf/ialloc.o fs/udf/inode.o fs/udf/lowlevel.o fs/udf/namei.o fs/udf/partition.o fs/udf/super.o fs/udf/truncate.o fs/udf/symlink.o fs/udf/directory.o fs/udf/misc.o fs/udf/udftime.o fs/udf/unicode.o ; scripts/mod/modpost fs/udf/udf.o
