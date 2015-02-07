#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xfc4fa38d, "struct_module" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1ff46fae, "i2c_add_adapter" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x1b7d4074, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xbaa41d73, "i2c_add_numbered_adapter" },
	{ 0xd4f2cf2, "dev_driver_string" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x760a0f4f, "yield" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core";


MODULE_INFO(srcversion, "12AF1E9ADAA3B6C84370BA3");
