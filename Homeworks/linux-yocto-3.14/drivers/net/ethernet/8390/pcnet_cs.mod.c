#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x43804739, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x9076670d, __VMLINUX_SYMBOL_STR(ei_poll) },
	{ 0x9d8ab11e, __VMLINUX_SYMBOL_STR(ei_get_stats) },
	{ 0x629b5dba, __VMLINUX_SYMBOL_STR(ei_tx_timeout) },
	{ 0x72197e07, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3a584de9, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x12209b1b, __VMLINUX_SYMBOL_STR(ei_set_multicast_list) },
	{ 0xa723cbea, __VMLINUX_SYMBOL_STR(ei_start_xmit) },
	{ 0xe2337087, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x809b3735, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x2b5cb822, __VMLINUX_SYMBOL_STR(__alloc_ei_netdev) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8e1d0b39, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x4c66aa5c, __VMLINUX_SYMBOL_STR(pcmcia_release_window) },
	{ 0xacfde77b, __VMLINUX_SYMBOL_STR(pcmcia_map_mem_page) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xbaca65b1, __VMLINUX_SYMBOL_STR(pcmcia_request_window) },
	{ 0x11f2e989, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x703015f0, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x3be903d, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x7d52f354, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xd21843c2, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0xa79f6d25, __VMLINUX_SYMBOL_STR(ei_open) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x37d6500f, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0x119721ac, __VMLINUX_SYMBOL_STR(ei_interrupt) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xd6a3c7f7, __VMLINUX_SYMBOL_STR(ei_close) },
	{ 0xfcb087f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x486f0d81, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x2238268, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x49f0074d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xe9e0f563, __VMLINUX_SYMBOL_STR(NS8390_init) },
	{ 0x64197178, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x735a0bd5, __VMLINUX_SYMBOL_STR(native_io_delay) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=8390";

MODULE_ALIAS("pcmcia:m0057c0021f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c000Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105cEA15f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0143c3341f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0143cC0ABf*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m021Bc0101f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m08A1cC0ABf*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa578BA6E7pbB0AC62C4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paBA9EB7E2pb077C174Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa1A424A1CpbB23897FFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2A151FACpb48B932AEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0733CC81pbB3765033pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF7CB0B07pb7A821B58pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paB2CED065pb3CED0555pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paDCFE12D3pbCD8906CCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paDCFE12D3pbC67C648Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*paB569A6E5pb5BD4FF2Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*paB569A6E5pb4BDF15C3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*paB569A6E5pbAE911C15pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*pa11C2DA09pb7289DC5DpcAAD95E1Fpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*pa*pb1ED59302pc*pd*");
MODULE_ALIAS("pcmcia:m0057c1004f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c000Df*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0075f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0145f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0149c0230f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0149c4530f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0149cC1ABf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0186c0110f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01BFc8041f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0213c2452f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0300f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0307f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc030Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1103f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1121f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa352FFF7Fpb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB38BCC2Epb4DE88352pcEACA6C8Dpd7E57C22E*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9533672Epb281F1C5Dpc3FF7175Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9FE55D3Dpb85601198pc3FF7175Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9999AB35pb00B2E941pc4B0D829Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa738A0019pb281F1C5Dpc5E9D92C0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3D294BE4pbEB9AAB6Cpc3FF7175Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1D55D7ECpbE4C64D34pc3FF7175Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpb6B260753pc3FF7175Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa932B7189pb699E4436pc6F6652E0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbD4CD2F20pcB87ADD82pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbD4CD2F20pc7D3D83A8pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa67F236ABpb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paDFC6B5B2pbCB112A11pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paDFC6B5B2pb5542BFFFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBB7FBDD7pbCD91CC68pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa36634A66pbC6D05997pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBB7FBDD7pb28E299F8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa36634A66pb62241D96pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5070A7F9pb82F96E96pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5070A7F9pb86741224pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa93B15570pb75EC3EFBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa93B15570pb461C5247pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa93B15570pb82F96E96pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa578BA6E7pb0A9888C1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa578BA6E7pb939FEDBDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa313ADBC8pb08D9F190pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3A7ADE0Fpb41C64504pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa552AB682pbEEB1BA6Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa44EBF863pb93AE4D79pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBC477DDEpbFBA775A7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paFA2E424DpbE9190D8Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paFA2E424Dpb3953D9B9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa21CAB552pbF6F90722pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A21501ApbA51564A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A21501Apb6589340Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb8797663Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440FpbFA9D85BDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440FpbC49BD73Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD4FDCBD8pbC49BD73Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb6705FCAApc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb47D5CA83pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb485E85D9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa110D26D9pb9FD2F0A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9791A90Epb9FD2F0A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb73EC0D88pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEE5AF0ADpb7C2ADD04pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa77008979pb9D8D445Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa77008979pbFD184814pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5CD66D9Dpb84697CE0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C629325pbB4E7DBAFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa697403D8pbE160B995pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa697403D8pbA6D3B233pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa69616CB3pbE600E76Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1A424A1CpbF28C8398pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1A424A1CpbD9A1D05Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1A424A1Cpb50DCD0ECpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1A424A1Cpb0F0073F9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa725B842DpbF1EFEE84pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa725B842Dpb2DB1F8E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa55632FD5pbDC65F2B1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6A26D1CFpbDC65F2B1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6A26D1CFpbC4F84EFBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6701DA11pb6701DA11pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53C864C6pbEDD059F6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53C864C6pb929C486Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa00B2E941pb4B0D829Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa96767301pb71FBBC61pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8DD86181pbF2B52517pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4BE14E3pb4B0D829Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2A151FACpbF00555CBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2A151FACpbC1B7E327pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa76E171BDpb6EB1C947pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3736C88pb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa60CB09A6pb60CB09A6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa93693494pb93693494pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpb6FC5459Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa56C538D2pb11B0FFC0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB18DC3B4pbCC51A956pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAF8144C9pb868F6616pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA89B87D3pb1EB88E64pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7BCB459ApbA5C81FA5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1128E633pbCE2A89B3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa313C7BE3pb0AFB54A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B7827B2pbCDA71D1Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B7827B2pbFEC71E40pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B7827B2pb79FBA4F7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B7827B2pb931AFAABpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBBEFB52FpbD2897A97pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb32EE8C78pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF7CB0B07pb6701DA11pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb453C3F9Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb66C5A389pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb3A3B28E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb7A3E5C3Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88FCDEDApb6D772737pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88FCDEDApb0E714BEEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88FCDEDApb81090922pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88FCDEDApbC1E2521Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF866B0B0pb6F6652E0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa20841B68pbAF8A3578pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD830297FpbD265C307pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa44445376pb8DED41D4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78D64BC0pbCA0CA4B8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa481E0094pbA2EB0CF3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa481E0094pb41A6916Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4B91CEC7pbE70220D6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E6DA59Bpb0478E472pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa648D55C1pbBDE526C7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa36E1191Fpb60C229B9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa36E1191FpbA6617EC8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa18DF0BA0pbBC912D76pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9AA79DC3pb60E5BC0Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa820A67B6pb31ED1A5Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAEDAEC74pbAD050EF1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb6E41773Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb3FF7175Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb4DE2F6C8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb5E9D92C0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb929C486Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb4D8817C8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbFE871EEBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb45F1F3B4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbEC5DBCA7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7500E246pb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbE707F641pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paDCFE12D3pbCD8906CCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbBF17199Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb42D5D7E1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEBF91155pb30074C80pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEBF91155pb7F5A4F50pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF5F025C2pb3A30E110pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paCDD0644Apb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7DD33481pb10B41826pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3E66E22pbB96150DFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paDC6F88FDpb4A7E2AE0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paDC6F88FDpb4BCBD7FDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC53AC515pb81E39388pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBDC3B102pb929C486Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa09928730pb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18BpbFB21D265pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC70A4760pb2ADE483Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC70A4760pb5DD978A8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1EAE9475pb0ED386FApc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa466B05F0pb8B74BC4Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa466B05F0pb33C8DB2Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8787BEC7pb*pcF6E4A31Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa932B7189pb*pc5E9D92C0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF866B0B0pb*pcF6E4A31Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc22A49F89pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa94FAF360pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8850B4DEpb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa06A8514Fpb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa75B8AD5Apb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pbA996D078pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa281F1C5Dpb570F348Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa281F1C5Dpb6FDCACEEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF5F025C2pb338E8155pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF5F025C2pb4AE85D35pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF7CB0B07pb66881874pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paB4585A1Apb53F922F8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*pa8FDF8F89pbDD5ED9E8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*pa*pb*pc*pd58FC6056*");
MODULE_ALIAS("pcmcia:m0175c0000f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2AD62F3Cpb9FD2F0A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAD180345pb9D58D392pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa01C43AE1pb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa34F3F1C8pb10B59F8Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paCF434FBApb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa00B2E941pb43AC239Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4BE14E3pb43AC239Bpc0877B627pd*");

MODULE_INFO(srcversion, "C955A368EFE798E52B99E51");
