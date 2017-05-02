cmd_crypto/crypto_algapi.o := i586-poky-linux-ld -m elf_x86_64   -r -o crypto/crypto_algapi.o crypto/algapi.o crypto/scatterwalk.o crypto/proc.o ; scripts/mod/modpost crypto/crypto_algapi.o
