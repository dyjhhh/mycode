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
	{ 0xe5a2774, "tcp_reno_min_cwnd" },
	{ 0x9f2c228f, "tcp_slow_start" },
	{ 0xe1df1e5f, "sysctl_tcp_tso_win_divisor" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AFF88AF3507937139CCEC5D");
