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
	{ 0x79277ccf, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x95c54b66, "alloc_etherdev" },
	{ 0x75b38522, "del_timer" },
	{ 0xf6dab3ab, "pci_disable_device" },
	{ 0x6a377716, "netif_carrier_on" },
	{ 0x1e01de09, "ethtool_op_get_sg" },
	{ 0xf32d2678, "schedule_work" },
	{ 0x806d5133, "param_array_get" },
	{ 0xfdd5a68c, "netif_carrier_off" },
	{ 0x4e196529, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x517377d, "pci_release_regions" },
	{ 0xd8c152cd, "raise_softirq_irqoff" },
	{ 0xf3344f90, "pci_enable_wake" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x76541a6, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0x999d3597, "__netdev_alloc_skb" },
	{ 0xa66c227b, "netif_rx" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x581a0674, "__pskb_pull_tail" },
	{ 0x64ec17c1, "pci_set_master" },
	{ 0xb45ff141, "__alloc_pages" },
	{ 0xfcb79d86, "pci_set_dma_mask" },
	{ 0x1b7d4074, "printk" },
	{ 0xf6eb0514, "ethtool_op_get_link" },
	{ 0x4cb0f3ca, "free_netdev" },
	{ 0xbb0a7a95, "register_netdev" },
	{ 0xefcf768d, "dma_free_coherent" },
	{ 0x21eaf830, "netif_receive_skb" },
	{ 0x78d65114, "dev_close" },
	{ 0x20187c7, "mod_timer" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xbc8cbf64, "dev_kfree_skb_any" },
	{ 0x80235cd9, "contig_page_data" },
	{ 0x678a8fcc, "dma_alloc_coherent" },
	{ 0x4f8fad8e, "dev_open" },
	{ 0x68637ff6, "pci_find_capability" },
	{ 0x369c61e8, "pci_set_mwi" },
	{ 0xf3e10498, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0xa5d6d111, "netif_device_attach" },
	{ 0xb6665290, "netif_device_detach" },
	{ 0xade379d, "__alloc_skb" },
	{ 0x73d58acd, "pci_bus_read_config_word" },
	{ 0xfeb9e54, "ethtool_op_set_sg" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x2cf190e3, "request_irq" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x130a566b, "eth_type_trans" },
	{ 0x3f56cf7a, "pskb_expand_head" },
	{ 0xcccf24ad, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xfde9fe64, "init_timer" },
	{ 0xd3725f43, "pci_set_power_state" },
	{ 0x39a81e50, "pci_clear_mwi" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x8faa81da, "___pskb_trim" },
	{ 0x5f32678c, "pci_request_regions" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xedc03953, "iounmap" },
	{ 0xf664cb5c, "__pci_register_driver" },
	{ 0x5e3b32a, "put_page" },
	{ 0x5b8f2927, "unregister_netdev" },
	{ 0x25669c3a, "ethtool_op_get_tso" },
	{ 0xc7e06bd1, "pci_choose_state" },
	{ 0x6e921dde, "__netif_schedule" },
	{ 0x85450ed, "pci_enable_device" },
	{ 0xe412b4f9, "pci_set_consistent_dma_mask" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc8d268e0, "ethtool_op_get_perm_addr" },
	{ 0xab95dea0, "__netif_rx_schedule" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb99bffed, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000101Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000101Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000101Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001026sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001075sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001079sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001099sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6DB39DFE385628913292FF9");
