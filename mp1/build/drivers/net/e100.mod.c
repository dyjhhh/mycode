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
	{ 0xa5d6d111, "netif_device_attach" },
	{ 0xb6665290, "netif_device_detach" },
	{ 0xd3725f43, "pci_set_power_state" },
	{ 0xedc03953, "iounmap" },
	{ 0x5b8f2927, "unregister_netdev" },
	{ 0x4cb0f3ca, "free_netdev" },
	{ 0xf6dab3ab, "pci_disable_device" },
	{ 0x517377d, "pci_release_regions" },
	{ 0xffddf211, "pci_iounmap" },
	{ 0xbb0a7a95, "register_netdev" },
	{ 0xf3344f90, "pci_enable_wake" },
	{ 0xfde9fe64, "init_timer" },
	{ 0x64ec17c1, "pci_set_master" },
	{ 0x254839b2, "pci_iomap" },
	{ 0xfcb79d86, "pci_set_dma_mask" },
	{ 0x5f32678c, "pci_request_regions" },
	{ 0x85450ed, "pci_enable_device" },
	{ 0x95c54b66, "alloc_etherdev" },
	{ 0xe83af378, "generic_mii_ioctl" },
	{ 0xc8d268e0, "ethtool_op_get_perm_addr" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x87d0c4f8, "mii_nway_restart" },
	{ 0x3960713, "ioread16" },
	{ 0xf1297e97, "mii_ethtool_sset" },
	{ 0xfdd5a68c, "netif_carrier_off" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x75b38522, "del_timer" },
	{ 0x2cf190e3, "request_irq" },
	{ 0xab95dea0, "__netif_rx_schedule" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x21eaf830, "netif_receive_skb" },
	{ 0x130a566b, "eth_type_trans" },
	{ 0xf3e10498, "skb_over_panic" },
	{ 0x999d3597, "__netdev_alloc_skb" },
	{ 0x678a8fcc, "dma_alloc_coherent" },
	{ 0xefcf768d, "dma_free_coherent" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0x6e921dde, "__netif_schedule" },
	{ 0xbc8cbf64, "dev_kfree_skb_any" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x20187c7, "mod_timer" },
	{ 0xa9d2c5ef, "mii_check_link" },
	{ 0xc6bf5b90, "mii_link_ok" },
	{ 0x8b4e7d5, "mii_ethtool_gset" },
	{ 0x7d11c268, "jiffies" },
	{ 0x79277ccf, "pci_bus_read_config_byte" },
	{ 0x2241a928, "ioread32" },
	{ 0xf32d2678, "schedule_work" },
	{ 0x1b7d4074, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x908aa9b2, "iowrite32" },
	{ 0x389e200f, "ioread8" },
	{ 0x375bf494, "iowrite8" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00008086d00001029sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001030sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001031sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001032sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001033sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001034sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001038sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001039sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Bsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Csv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Dsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Esv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001050sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001051sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001052sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001053sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001054sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001055sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001056sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001057sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001059sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001064sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001065sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001066sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001067sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001068sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001069sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000106Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000106Bsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001091sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001092sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001093sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001094sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001095sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001209sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001229sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00002449sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00002459sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000245Dsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d000027DCsv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "05A1AB9B6C4D2583F72B73D");
