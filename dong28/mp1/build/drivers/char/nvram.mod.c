#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xfc4fa38d, "struct_module" },
	{ 0x4d1372b5, "remove_proc_entry" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xe76ad313, "misc_register" },
	{ 0x1b7d4074, "printk" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x2def7f76, "rtc_cmos_write" },
	{ 0x7dceceac, "capable" },
	{ 0x99341c56, "create_proc_entry" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0xde4930f2, "misc_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "92CCB558585F5EA27A11492");
