cmd_drivers/net/wireless/rt2x00/rt2x00lib.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/net/wireless/rt2x00/rt2x00lib.o drivers/net/wireless/rt2x00/rt2x00dev.o drivers/net/wireless/rt2x00/rt2x00mac.o drivers/net/wireless/rt2x00/rt2x00config.o drivers/net/wireless/rt2x00/rt2x00queue.o drivers/net/wireless/rt2x00/rt2x00link.o drivers/net/wireless/rt2x00/rt2x00crypto.o drivers/net/wireless/rt2x00/rt2x00firmware.o drivers/net/wireless/rt2x00/rt2x00leds.o ; scripts/mod/modpost drivers/net/wireless/rt2x00/rt2x00lib.o
