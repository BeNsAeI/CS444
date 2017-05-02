cmd_kernel/rcu/built-in.o :=  i586-poky-linux-ld -m elf_x86_64   -r -o kernel/rcu/built-in.o kernel/rcu/update.o kernel/rcu/srcu.o kernel/rcu/tree.o ; scripts/mod/modpost kernel/rcu/built-in.o
