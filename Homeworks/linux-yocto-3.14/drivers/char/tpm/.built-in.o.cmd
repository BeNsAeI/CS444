cmd_drivers/char/tpm/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o drivers/char/tpm/built-in.o drivers/char/tpm/tpm.o drivers/char/tpm/tpm_tis.o ; scripts/mod/modpost drivers/char/tpm/built-in.o
