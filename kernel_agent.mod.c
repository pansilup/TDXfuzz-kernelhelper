#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
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
__used __section(__versions) = {
	{ 0xdd8f8694, "module_layout" },
	{ 0xdd02ac5a, "misc_deregister" },
	{ 0x978f9593, "misc_register" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x948ed22b, "__put_devmap_managed_page" },
	{ 0x428e81bf, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xfb8ca8d6, "get_user_pages_fast" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x56b1771b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7e322334, "alloc_pages_current" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A5A43FC83364A1DAC0180AA");
