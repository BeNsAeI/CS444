cmd_fs/proc/proc.o := i586-poky-linux-ld -m elf_x86_64   -r -o fs/proc/proc.o fs/proc/task_mmu.o fs/proc/inode.o fs/proc/root.o fs/proc/base.o fs/proc/generic.o fs/proc/array.o fs/proc/fd.o fs/proc/proc_tty.o fs/proc/cmdline.o fs/proc/consoles.o fs/proc/cpuinfo.o fs/proc/devices.o fs/proc/interrupts.o fs/proc/loadavg.o fs/proc/meminfo.o fs/proc/stat.o fs/proc/uptime.o fs/proc/version.o fs/proc/softirqs.o fs/proc/namespaces.o fs/proc/self.o fs/proc/proc_sysctl.o fs/proc/proc_net.o fs/proc/kcore.o fs/proc/vmcore.o fs/proc/kmsg.o fs/proc/page.o ; scripts/mod/modpost fs/proc/proc.o
