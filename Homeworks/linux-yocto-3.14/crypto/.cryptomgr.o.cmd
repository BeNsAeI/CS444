cmd_crypto/cryptomgr.o := i586-poky-linux-ld -m elf_x86_64   -r -o crypto/cryptomgr.o crypto/algboss.o crypto/testmgr.o ; scripts/mod/modpost crypto/cryptomgr.o
