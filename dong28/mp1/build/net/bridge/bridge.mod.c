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
	{ 0xa7e6909, "kobject_put" },
	{ 0x4d28b566, "kmem_cache_destroy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37b04094, "sysfs_remove_bin_file" },
	{ 0x6d819be5, "unregister_netdevice" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x75b38522, "del_timer" },
	{ 0x385657ff, "dev_get_flags" },
	{ 0x650128e7, "br_fdb_get_hook" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x752607c5, "kobject_uevent" },
	{ 0x461add1c, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1e01de09, "ethtool_op_get_sg" },
	{ 0xdd6faffc, "__rtnl_register" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x112ac5d0, "rtnl_notify" },
	{ 0x59249373, "kobject_set_name" },
	{ 0x3019a954, "kobject_unregister" },
	{ 0x9e13ae1e, "alloc_netdev" },
	{ 0xc0bb41a8, "kobject_del" },
	{ 0x8706fba7, "call_rcu" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x74b83753, "sysfs_remove_group" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x581a0674, "__pskb_pull_tail" },
	{ 0x4b1b027, "dev_base_head" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0x1b7d4074, "printk" },
	{ 0xf6eb0514, "ethtool_op_get_link" },
	{ 0x859204af, "sscanf" },
	{ 0x85509ff6, "sysfs_create_group" },
	{ 0x444779c4, "nla_find" },
	{ 0x4cb0f3ca, "free_netdev" },
	{ 0xd5614e73, "dev_ethtool" },
	{ 0xf51804d0, "llc_mac_hdr_init" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x44fe8d46, "nla_put" },
	{ 0x21eaf830, "netif_receive_skb" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0xeb960023, "dev_get_by_index" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x20187c7, "mod_timer" },
	{ 0x5ef7324, "sysfs_remove_link" },
	{ 0xa478f74e, "kobject_add" },
	{ 0x3734927c, "__dev_get_by_index" },
	{ 0x72ee3ec7, "sysfs_create_link" },
	{ 0xf3e10498, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xb4a6a543, "rtnl_set_sk_err" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0xade379d, "__alloc_skb" },
	{ 0xa74dee90, "br_fdb_put_hook" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0x93df6654, "call_usermodehelper_keys" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x174a08b6, "skb_under_panic" },
	{ 0xb080ca, "sysfs_create_file" },
	{ 0x4e8a4d69, "brioctl_set" },
	{ 0x47f05cf, "ether_setup" },
	{ 0x8d3d32a, "__dev_get_by_name" },
	{ 0xee886e4c, "llc_sap_open" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0xfde9fe64, "init_timer" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x83e0f1ba, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0xd079e157, "dev_alloc_name" },
	{ 0x907c2f1f, "sysfs_create_bin_file" },
	{ 0x609149c3, "kobject_init" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x8fe680c0, "ethtool_op_get_tx_csum" },
	{ 0xc7c52529, "br_handle_frame_hook" },
	{ 0x9f100139, "jiffies_to_clock_t" },
	{ 0x25669c3a, "ethtool_op_get_tso" },
	{ 0xc7d6f794, "llc_sap_close" },
	{ 0xf0a95146, "dev_queue_xmit" },
	{ 0xaac47dbf, "kobject_register" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x159faa93, "dev_set_mtu" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=llc";


MODULE_INFO(srcversion, "619758E0ADB91D003F3EFA9");
