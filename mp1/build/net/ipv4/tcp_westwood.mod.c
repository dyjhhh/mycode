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
	{ 0x9ba9bd45, "tcp_unregister_congestion_control" },
	{ 0xca6222cd, "tcp_register_congestion_control" },
	{ 0xd6d89985, "tcp_reno_cong_avoid" },
	{ 0x292619f6, "tcp_reno_ssthresh" },
	{ 0x44fe8d46, "nla_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0A3EDAF6218A13752316F5C");
