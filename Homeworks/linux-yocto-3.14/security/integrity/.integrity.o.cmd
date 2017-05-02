cmd_security/integrity/integrity.o := i586-poky-linux-ld -m elf_x86_64   -r -o security/integrity/integrity.o security/integrity/iint.o ; scripts/mod/modpost security/integrity/integrity.o
