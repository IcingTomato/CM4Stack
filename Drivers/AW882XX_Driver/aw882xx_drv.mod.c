#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb181834b, "module_layout" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xbaeca30, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x97255bdf, "strlen" },
	{ 0x3c4bd21, "i2c_del_driver" },
	{ 0x1ba5a694, "i2c_transfer" },
	{ 0x384513c2, "power_supply_get_by_name" },
	{ 0xcc34edc, "gpio_to_desc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xe82e6d93, "snd_soc_register_component" },
	{ 0x2948c907, "sysfs_remove_group" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd0ee643, "snd_soc_info_enum_double" },
	{ 0x90509db4, "devm_gpio_free" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd53a2c40, "sysfs_create_group" },
	{ 0xcfbc5d26, "snd_soc_add_component_controls" },
	{ 0xd07310e1, "of_property_read_string" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf5e1ca4b, "_dev_err" },
	{ 0x4fdb28ad, "devm_kfree" },
	{ 0x73735871, "snd_soc_unregister_component" },
	{ 0x6fb299c5, "devm_gpio_request_one" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe0ca2515, "snd_soc_info_volsw" },
	{ 0x1e2149ae, "i2c_register_driver" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf35ed101, "power_supply_get_property" },
	{ 0xe228d962, "devm_free_irq" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x926415fa, "of_get_named_gpio_flags" },
	{ 0x6a074eb8, "kmem_cache_alloc_trace" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd661d00f, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x883194e5, "gpiod_to_irq" },
	{ 0x4fcbab, "request_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xac5a6a2d, "of_property_read_variable_u32_array" },
	{ 0x860ea50a, "devm_kmalloc" },
	{ 0x23e425d2, "devm_request_threaded_irq" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd0e9fb09, "release_firmware" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("i2c:aw882xx_smartpa");

MODULE_INFO(srcversion, "79B0FA28A2C89D62B077423");
