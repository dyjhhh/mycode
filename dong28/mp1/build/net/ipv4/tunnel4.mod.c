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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2a25ef55, "icmp_send" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0xf6db042b, "inet_del_protocol" },
	{ 0x581a0674, "__pskb_pull_tail" },
	{ 0x1b7d4074, "printk" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0xf81b8811, "inet_add_protocol" },
	{ 0xa369eedc, "kfree_skb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "61F74848E8308291FD2C6D3");
