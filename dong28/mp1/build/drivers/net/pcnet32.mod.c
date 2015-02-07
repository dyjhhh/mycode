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
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x5b8f2927, "unregister_netdev" },
	{ 0x6a377716, "netif_carrier_on" },
	{ 0xfdd5a68c, "netif_carrier_off" },
	{ 0xe83af378, "generic_mii_ioctl" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xab95dea0, "__netif_rx_schedule" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x2cf190e3, "request_irq" },
	{ 0x4cb0f3ca, "free_netdev" },
	{ 0xbb0a7a95, "register_netdev" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x95c54b66, "alloc_etherdev" },
	{ 0xf6dab3ab, "pci_disable_device" },
	{ 0xad54ccb4, "forbid_dac" },
	{ 0x64ec17c1, "pci_set_master" },
	{ 0x85450ed, "pci_enable_device" },
	{ 0xef79ac56, "__release_region" },
	{ 0x852abecf, "__request_region" },
	{ 0xb407b205, "ioport_resource" },
	{ 0xc8d268e0, "ethtool_op_get_perm_addr" },
	{ 0x25669c3a, "ethtool_op_get_tso" },
	{ 0x1e01de09, "ethtool_op_get_sg" },
	{ 0x8fe680c0, "ethtool_op_get_tx_csum" },
	{ 0x21eaf830, "netif_receive_skb" },
	{ 0x130a566b, "eth_type_trans" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b38522, "del_timer" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0xfde9fe64, "init_timer" },
	{ 0x20187c7, "mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf3e10498, "skb_over_panic" },
	{ 0x87d0c4f8, "mii_nway_restart" },
	{ 0xc6bf5b90, "mii_link_ok" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf1297e97, "mii_ethtool_sset" },
	{ 0x8b4e7d5, "mii_ethtool_gset" },
	{ 0xbc8cbf64, "dev_kfree_skb_any" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xade379d, "__alloc_skb" },
	{ 0xefcf768d, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x1b7d4074, "printk" },
	{ 0x678a8fcc, "dma_alloc_coherent" },
	{ 0x6e921dde, "__netif_schedule" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001022d00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00002000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00002000sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "8654F68892E6A3C50D18CE0");
