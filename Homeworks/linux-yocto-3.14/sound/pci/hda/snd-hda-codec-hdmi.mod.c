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
	{ 0x24a94b26, __VMLINUX_SYMBOL_STR(snd_info_get_line) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3799e107, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable) },
	{ 0x942531df, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0x9a8e1877, __VMLINUX_SYMBOL_STR(snd_array_free) },
	{ 0xa87a48ea, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0xeb100589, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0xbe7dd7dc, __VMLINUX_SYMBOL_STR(snd_array_new) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xeda3a721, __VMLINUX_SYMBOL_STR(snd_print_pcm_bits) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x295bd5c8, __VMLINUX_SYMBOL_STR(snd_hda_query_supported_pcm) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9e913c1, __VMLINUX_SYMBOL_STR(snd_pcm_alt_chmaps) },
	{ 0x310ce7f3, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xecca2f4d, __VMLINUX_SYMBOL_STR(snd_hda_spdif_ctls_unassign) },
	{ 0x5ff98301, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4d806845, __VMLINUX_SYMBOL_STR(snd_hda_query_pin_caps) },
	{ 0x1e7f751, __VMLINUX_SYMBOL_STR(snd_hda_pin_sense) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x617ae9cf, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x2e2b40d2, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc7a6262f, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_power_to_all) },
	{ 0x7820542, __VMLINUX_SYMBOL_STR(snd_hda_add_codec_preset) },
	{ 0x335d8496, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7d0bd8a9, __VMLINUX_SYMBOL_STR(snd_hda_codec_write) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8de44aa6, __VMLINUX_SYMBOL_STR(snd_hda_spdif_ctls_assign) },
	{ 0xf7079b68, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0xbdcc10b9, __VMLINUX_SYMBOL_STR(snd_hda_spdif_out_of_nid) },
	{ 0xaffa93ac, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0x417fd320, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x39c347cf, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0x3348e1fd, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0xa68d7bfe, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xab4422bd, __VMLINUX_SYMBOL_STR(snd_hda_codec_write_cache) },
	{ 0x26d66b3d, __VMLINUX_SYMBOL_STR(snd_hda_get_sub_nodes) },
	{ 0xc5da98c1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x5d9f3b07, __VMLINUX_SYMBOL_STR(snd_hda_codec_update_widgets) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc6c10eed, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0x1d9fb376, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctl) },
	{ 0xd6f9caf2, __VMLINUX_SYMBOL_STR(snd_hda_codec_resume_amp) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x89395a48, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0x74acd37a, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get_from_tag) },
	{ 0xdc8ae4c4, __VMLINUX_SYMBOL_STR(snd_card_proc_new) },
	{ 0x84f2de92, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0xfb4a82f1, __VMLINUX_SYMBOL_STR(snd_pcm_add_chmap_ctls) },
	{ 0x846a8773, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb18c7701, __VMLINUX_SYMBOL_STR(snd_hda_codec_resume_cache) },
	{ 0x8a67ca25, __VMLINUX_SYMBOL_STR(snd_hda_jack_set_dirty_all) },
	{ 0x56927719, __VMLINUX_SYMBOL_STR(snd_hda_power_save) },
	{ 0x884197ba, __VMLINUX_SYMBOL_STR(snd_hda_jack_report_sync) },
	{ 0x5f235890, __VMLINUX_SYMBOL_STR(snd_hda_delete_codec_preset) },
	{ 0xc5f75528, __VMLINUX_SYMBOL_STR(snd_hda_codec_read) },
	{ 0xe039175e, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-hda-codec,snd-pcm";


MODULE_INFO(srcversion, "E8CD8593A92412C45D95302");
