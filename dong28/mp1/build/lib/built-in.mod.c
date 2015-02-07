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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x70566a85, "pci_release_region" },
	{ 0xd5bbc5f2, "devres_get" },
	{ 0x68bc4764, "devres_find" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1b7d4074, "printk" },
	{ 0x36e9491a, "devres_alloc" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7f86e85a, "devres_add" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xda29b187, "devres_destroy" },
	{ 0x3e4e45a7, "pci_request_region" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=built-in,built-in,built-in,built-in,built-in";

