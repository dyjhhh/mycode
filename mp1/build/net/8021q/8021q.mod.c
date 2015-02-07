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
	{ 0xa71fc843, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3eb58bae, "dev_change_flags" },
	{ 0x6d819be5, "unregister_netdevice" },
	{ 0x8f5cebc, "single_open" },
	{ 0xb8e064c3, "seq_open" },
	{ 0x4e848e9f, "single_release" },
	{ 0x5eb621a6, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6a377716, "netif_carrier_on" },
	{ 0xe45377e8, "dev_get_by_name" },
	{ 0xaad2169d, "skb_copy" },
	{ 0x49989c66, "seq_printf" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xfdd5a68c, "netif_carrier_off" },
	{ 0x4d1372b5, "remove_proc_entry" },
	{ 0x8beca583, "dev_set_allmulti" },
	{ 0x9e13ae1e, "alloc_netdev" },
	{ 0xa147422b, "linkwatch_fire_event" },
	{ 0x8706fba7, "call_rcu" },
	{ 0x14fed0de, "skb_realloc_headroom" },
	{ 0x8cb9afbb, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x2fd662ce, "dev_mc_add" },
	{ 0x3797e731, "vlan_ioctl_set" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xa66c227b, "netif_rx" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x77152044, "proc_mkdir" },
	{ 0xb74101df, "proc_net" },
	{ 0x4b1b027, "dev_base_head" },
	{ 0x1b7d4074, "printk" },
	{ 0x4cb0f3ca, "free_netdev" },
	{ 0xd5614e73, "dev_ethtool" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x7f82f13d, "dev_remove_pack" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x78178274, "dev_mc_delete" },
	{ 0x7dceceac, "capable" },
	{ 0xb2c7e586, "arp_find" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x174a08b6, "skb_under_panic" },
	{ 0x99341c56, "create_proc_entry" },
	{ 0x8e898264, "skb_pull_rcsum" },
	{ 0xd43c6276, "seq_lseek" },
	{ 0x83e0f1ba, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b8f2927, "unregister_netdev" },
	{ 0x25da070, "snprintf" },
	{ 0xdeee1def, "dev_add_pack" },
	{ 0xee8ad456, "seq_release" },
	{ 0x8235805b, "memmove" },
	{ 0xf0a95146, "dev_queue_xmit" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E16B198DCE96ABFFC69B7A0");
