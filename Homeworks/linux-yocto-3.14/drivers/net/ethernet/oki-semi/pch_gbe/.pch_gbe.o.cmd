cmd_drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe.o := i586-poky-linux-ld -m elf_x86_64   -r -o drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe.o drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_phy.o drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_ethtool.o drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.o drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_api.o drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_main.o ; scripts/mod/modpost drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe.o
