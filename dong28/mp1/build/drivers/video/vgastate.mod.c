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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C66C4C901B5B0AC1637C655");
