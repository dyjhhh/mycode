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
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e13ae1e, "alloc_netdev" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa66c227b, "netif_rx" },
	{ 0x1b7d4074, "printk" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xf3e10498, "skb_over_panic" },
	{ 0xade379d, "__alloc_skb" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0x130a566b, "eth_type_trans" },
	{ 0x47f05cf, "ether_setup" },
	{ 0xfaf98462, "bitrev32" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x6e921dde, "__netif_schedule" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "97BA56C5B7EEF0A034DB053");
