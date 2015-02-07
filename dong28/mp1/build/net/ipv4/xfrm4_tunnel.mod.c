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
	{ 0xde14a4b0, "xfrm4_tunnel_deregister" },
	{ 0x113f8c91, "xfrm_unregister_type" },
	{ 0x135612ab, "xfrm4_tunnel_register" },
	{ 0x1b7d4074, "printk" },
	{ 0xa4e263c1, "xfrm_register_type" },
	{ 0x382c1b4c, "xfrm4_rcv" },
	{ 0x2124474, "ip_send_check" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=tunnel4";


MODULE_INFO(srcversion, "E443C11AC22BA9CCB84A6C0");
