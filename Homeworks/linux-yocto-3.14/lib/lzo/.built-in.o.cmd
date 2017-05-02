cmd_lib/lzo/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o lib/lzo/built-in.o lib/lzo/lzo_compress.o lib/lzo/lzo_decompress.o ; scripts/mod/modpost lib/lzo/built-in.o
