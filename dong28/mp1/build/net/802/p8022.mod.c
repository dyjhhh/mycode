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
	{ 0xee886e4c, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7d6f794, "llc_sap_close" },
	{ 0x1054678c, "llc_build_and_send_ui_pkt" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=llc";


MODULE_INFO(srcversion, "745AAD455947E1788313083");
