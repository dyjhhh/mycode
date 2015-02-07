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
	{ 0xbfee3ad5, "loop_unregister_transfer" },
	{ 0xbc9f19d2, "loop_register_transfer" },
	{ 0x1b7d4074, "printk" },
	{ 0x115828de, "crypto_free_tfm" },
	{ 0x3c4440a0, "crypto_alloc_base" },
	{ 0x8235805b, "memmove" },
	{ 0x6c1ce5ce, "strcspn" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=loop";


MODULE_INFO(srcversion, "84E731D13FA0BF6A5347376");
