cmd_sound/usb/caiaq/snd-usb-caiaq.o := i586-poky-linux-ld -m elf_x86_64   -r -o sound/usb/caiaq/snd-usb-caiaq.o sound/usb/caiaq/device.o sound/usb/caiaq/audio.o sound/usb/caiaq/midi.o sound/usb/caiaq/control.o sound/usb/caiaq/input.o ; scripts/mod/modpost sound/usb/caiaq/snd-usb-caiaq.o
