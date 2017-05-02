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
	{ 0xe2337087, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x809b3735, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0xd21843c2, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2d85b091, __VMLINUX_SYMBOL_STR(orinoco_if_add) },
	{ 0x57fc0323, __VMLINUX_SYMBOL_STR(orinoco_init) },
	{ 0x11f2e989, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x1208b60, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0xffe27bca, __VMLINUX_SYMBOL_STR(orinoco_interrupt) },
	{ 0xdb0cbd65, __VMLINUX_SYMBOL_STR(hermes_struct_init) },
	{ 0x594bf15b, __VMLINUX_SYMBOL_STR(ioport_map) },
	{ 0x703015f0, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x6dadf8f8, __VMLINUX_SYMBOL_STR(alloc_orinocodev) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x13129798, __VMLINUX_SYMBOL_STR(pcmcia_reset_card) },
	{ 0xdc6aa45e, __VMLINUX_SYMBOL_STR(free_orinocodev) },
	{ 0x33d69484, __VMLINUX_SYMBOL_STR(orinoco_if_del) },
	{ 0xfc39e32f, __VMLINUX_SYMBOL_STR(ioport_unmap) },
	{ 0x486f0d81, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xc910ee3a, __VMLINUX_SYMBOL_STR(orinoco_down) },
	{ 0x62f1e5f2, __VMLINUX_SYMBOL_STR(orinoco_up) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=orinoco";

MODULE_ALIAS("pcmcia:m0101c0777f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m016Bc0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01EBc080Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0261c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0268c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0268c0003f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0305f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02AAc0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02ACc0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02ACc3021f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m14EAcB001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa41240E5Bpb56010AF3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5CD01705pb4271660Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78FC06EEpb45A50C1Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78FC06EEpbDB9AA842pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD8A43B78pb0D341169pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa35DADC74pb01F7FEDBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa32D445F5pbEDEFFD90pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEF544D24pbCD8EA916pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4507A33ApbEF54F0E3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa56CC3F1Apb0BCF220Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb07F58077pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7E3B326Apb49893E92pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa23EB9949pbC562E72Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa481E0094pb7360E410pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa481E0094pbF57CA4B3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa24358CD4pbC562E72Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2D617EA0pb88CD5767pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4AC44287pb235A6BEDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC6536A5Epb090C3CD9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC6536A5Epb9F494E26pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa43D74CB4pb579BD91Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3F02B4D6pb3663CB0Epc*pd*");
MODULE_ALIAS("pcmcia:m0156c0002f*fn*pfn*pa*pb*pcD27DEB1Apd*");
MODULE_ALIAS("pcmcia:m000Bc7100f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m000Bc7300f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0089c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0126c8000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0138c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01FFc0008f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0250c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1612f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1613f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m028Ac0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m028Ac0673f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m50C2c7300f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m9005c0021f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mC001c0008f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mC250c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0005f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa11D901AFpb6E9BD926pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa393089DApbA71E69D5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE6EC52CEpb08649AF2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2DECECE3pb82067C18pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2DECECE3pbF57CA4B3pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49Cpb15A75E5Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440FpbA6405584pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440FpbDF6115F9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa29E33311pbEE7A27AEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paFDD73470pbE0B6F146pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa71B18589pbF144E3ACpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa71B18589pbB6F1B0ABpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3B6E20C8pbEFCCAFE9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa74C5E40DpbDB472A18pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa74C5E40Dpb8304FF77pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4B801A17pb6345A0BFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb0C52F395pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5961BF85pb6EEC8C01pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0306467Fpb9762E8F1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA37434E9pb9762E8F1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paFEA54C90pb48F2BDD6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa209F40ABpbD9715264pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa209F40ABpb46263178pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb196BD757pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb474A1F2Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa273FE3DBpb32A1EAEEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pc355CB092pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pc630D52B2pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pcDD97A26Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pcC9049A39pd*");
MODULE_ALIAS("pcmcia:m0156c0002f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "1853B99BE932B5C2EA523E1");
