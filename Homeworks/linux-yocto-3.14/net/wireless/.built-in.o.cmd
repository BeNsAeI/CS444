cmd_net/wireless/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o net/wireless/built-in.o net/wireless/wext-core.o net/wireless/wext-proc.o net/wireless/wext-spy.o net/wireless/wext-priv.o ; scripts/mod/modpost net/wireless/built-in.o
