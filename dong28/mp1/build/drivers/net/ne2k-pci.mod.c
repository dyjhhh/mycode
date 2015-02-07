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
	{ 0xcccf24ad, "pci_unregister_driver" },
	{ 0xf664cb5c, "__pci_register_driver" },
	{ 0xf6dab3ab, "pci_disable_device" },
	{ 0x5b8f2927, "unregister_netdev" },
	{ 0xc8d268e0, "ethtool_op_get_perm_addr" },
	{ 0x1e01de09, "ethtool_op_get_sg" },
	{ 0x8fe680c0, "ethtool_op_get_tx_csum" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xff437b6b, "ei_close" },
	{ 0x364e1293, "ei_open" },
	{ 0x2cf190e3, "request_irq" },
	{ 0x7d7e0dbc, "ei_interrupt" },
	{ 0xef79ac56, "__release_region" },
	{ 0x4cb0f3ca, "free_netdev" },
	{ 0xbb0a7a95, "register_netdev" },
	{ 0x8a682e78, "NS8390_init" },
	{ 0x7d11c268, "jiffies" },
	{ 0x98e8bce3, "__alloc_ei_netdev" },
	{ 0x852abecf, "__request_region" },
	{ 0xb407b205, "ioport_resource" },
	{ 0x1b7d4074, "printk" },
	{ 0xd4f2cf2, "dev_driver_string" },
	{ 0x85450ed, "pci_enable_device" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=8390";

MODULE_ALIAS("pci:v000010ECd00008029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00000940sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00001401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008E2Ed00003000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004A14d00005000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000926sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010BDd00000E34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00005A5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000012C3d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000012C3d00005598sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008C4Ad00001980sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E04D9F3DF6338AC2FF81F92");
