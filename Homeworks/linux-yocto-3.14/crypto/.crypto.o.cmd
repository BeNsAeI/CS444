cmd_crypto/crypto.o := i586-poky-linux-ld -m elf_x86_64   -r -o crypto/crypto.o crypto/api.o crypto/cipher.o crypto/compress.o crypto/memneq.o ; scripts/mod/modpost crypto/crypto.o
