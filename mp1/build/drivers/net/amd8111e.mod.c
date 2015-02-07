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
	{ 0xfde9fe64, "init_timer" },
	{ 0xbb0a7a95, "register_netdev" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x95c54b66, "alloc_etherdev" },
	{ 0xfcb79d86, "pci_set_dma_mask" },
	{ 0x68637ff6, "pci_find_capability" },
	{ 0x64ec17c1, "pci_set_master" },
	{ 0x5f32678c, "pci_request_regions" },
	{ 0x85450ed, "pci_enable_device" },
	{ 0xf6dab3ab, "pci_disable_device" },
	{ 0x517377d, "pci_release_regions" },
	{ 0x4cb0f3ca, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x5b8f2927, "unregister_netdev" },
	{ 0x20187c7, "mod_timer" },
	{ 0xa5d6d111, "netif_device_attach" },
	{ 0x772715d0, "pci_restore_state" },
	{ 0xd3725f43, "pci_set_power_state" },
	{ 0xf473e440, "pci_save_state" },
	{ 0xf3344f90, "pci_enable_wake" },
	{ 0xb6665290, "netif_device_detach" },
	{ 0x7dceceac, "capable" },
	{ 0xc6bf5b90, "mii_link_ok" },
	{ 0x87d0c4f8, "mii_nway_restart" },
	{ 0xf1297e97, "mii_ethtool_sset" },
	{ 0x8b4e7d5, "mii_ethtool_gset" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x9afe9c91, "__mod_timer" },
	{ 0x2cf190e3, "request_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x75b38522, "del_timer" },
	{ 0xab95dea0, "__netif_rx_schedule" },
	{ 0xfdd5a68c, "netif_carrier_off" },
	{ 0x6a377716, "netif_carrier_on" },
	{ 0x130a566b, "eth_type_trans" },
	{ 0xf3e10498, "skb_over_panic" },
	{ 0x6e921dde, "__netif_schedule" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0xb99bffed, "per_cpu__softnet_data" },
	{ 0xa66c227b, "netif_rx" },
	{ 0x21eaf830, "netif_receive_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xbc8cbf64, "dev_kfree_skb_any" },
	{ 0xefcf768d, "dma_free_coherent" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0xade379d, "__alloc_skb" },
	{ 0x678a8fcc, "dma_alloc_coherent" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001022d00007462sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5E35F4D0993219E9BC965D7");
