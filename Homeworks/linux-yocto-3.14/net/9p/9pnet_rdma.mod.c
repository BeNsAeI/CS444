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
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xac20a972, __VMLINUX_SYMBOL_STR(p9_client_cb) },
	{ 0x86186e60, __VMLINUX_SYMBOL_STR(v9fs_unregister_trans) },
	{ 0x2fdab68f, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x1b6314fd, __VMLINUX_SYMBOL_STR(in_aton) },
	{ 0xd90236a4, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0x9f6b4c62, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x4326fc6c, __VMLINUX_SYMBOL_STR(v9fs_register_trans) },
	{ 0xe6ba4f07, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x3aeaa2d6, __VMLINUX_SYMBOL_STR(p9_parse_header) },
	{ 0xcddc09bd, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0x3d506e03, __VMLINUX_SYMBOL_STR(p9_tag_lookup) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x877e422f, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc5b503a8, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xd1c42aa1, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x5a643b1f, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0xf910f34, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0xda440ed3, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x368548fa, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8382c933, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd976ad5e, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0xb614c9ca, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0x1dcd214, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet,ib_core,rdma_cm";


MODULE_INFO(srcversion, "6CA5B7081B4D641AD810009");
