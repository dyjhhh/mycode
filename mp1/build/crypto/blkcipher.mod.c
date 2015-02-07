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
	{ 0xf6ba3642, "mem_map" },
	{ 0x49989c66, "seq_printf" },
	{ 0x1fc3f725, "scatterwalk_copychunks" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x1b7d4074, "printk" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x93c2a8dc, "scatterwalk_map" },
	{ 0x986d1a01, "scatterwalk_done" },
	{ 0x17334967, "scatterwalk_start" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0E484F7822B9992AA8C85D9");
