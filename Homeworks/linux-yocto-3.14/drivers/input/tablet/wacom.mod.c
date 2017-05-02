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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb5e4efcf, __VMLINUX_SYMBOL_STR(usb_hub_find_child) },
	{ 0xca22f2ae, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x9dbda727, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x6e860b79, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2089492e, __VMLINUX_SYMBOL_STR(power_supply_powers) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf07440d8, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xd69b993f, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x776b584a, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x81b10bc2, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xab30892f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xd139f368, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xaca52592, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xb0229b2c, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x57d542cf, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x11e519bc, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xe8ffc674, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xc00d2030, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xaee6860b, __VMLINUX_SYMBOL_STR(input_mt_get_slot_by_key) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xb4a806ac, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x3800b609, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xeb63674c, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x41a6bdb3, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xfed40a7c, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x4c9cec59, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x1343983f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x7c0c0c6b, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v056Ap0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0063d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap006Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap006Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0059d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap005Dd*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap005Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap005Ed*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap00B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00BBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00BCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap002Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00CEd*dc*dsc*dp*ic03isc01ip02in*");
MODULE_ALIAS("usb:v056Ap0084d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00F0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00CCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0093d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap009Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00ECd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00EDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00EFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap010Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0302d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap0303d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap030Ed*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0314d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap0315d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap0317d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap4001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00F6d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap00FAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00FBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0309d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v17EFp6004d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BD0511C57C7A9D2F6C42354");
