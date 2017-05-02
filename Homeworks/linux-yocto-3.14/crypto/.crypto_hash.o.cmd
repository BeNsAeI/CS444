cmd_crypto/crypto_hash.o := i586-poky-linux-ld -m elf_x86_64   -r -o crypto/crypto_hash.o crypto/ahash.o crypto/shash.o ; scripts/mod/modpost crypto/crypto_hash.o
