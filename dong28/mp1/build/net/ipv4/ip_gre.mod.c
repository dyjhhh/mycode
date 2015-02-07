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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf6db042b, "inet_del_protocol" },
	{ 0xbb0a7a95, "register_netdev" },
	{ 0xf81b8811, "inet_add_protocol" },
	{ 0x3734927c, "__dev_get_by_index" },
	{ 0xdeac66cc, "in_dev_finish_destroy" },
	{ 0x2ca918c, "ip_mc_dec_group" },
	{ 0x729790cc, "inetdev_by_index" },
	{ 0xf7c8d7f7, "ip_mc_inc_group" },
	{ 0x6d819be5, "unregister_netdevice" },
	{ 0x5451fbe0, "netdev_state_change" },
	{ 0x7dceceac, "capable" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x2124474, "ip_send_check" },
	{ 0x18b1a4c2, "__ip_select_ident" },
	{ 0x174a08b6, "skb_under_panic" },
	{ 0xb83d04d, "sock_wfree" },
	{ 0x14fed0de, "skb_realloc_headroom" },
	{ 0xda1eae6d, "ip_route_output_key" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0x2a25ef55, "icmp_send" },
	{ 0xa66c227b, "netif_rx" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0x7d50a24, "csum_partial" },
	{ 0x2de63767, "__secpath_destroy" },
	{ 0xc08980fd, "__skb_checksum_complete" },
	{ 0x581a0674, "__pskb_pull_tail" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4cb0f3ca, "free_netdev" },
	{ 0xa71fc843, "register_netdevice" },
	{ 0x9e13ae1e, "alloc_netdev" },
	{ 0x8d3d32a, "__dev_get_by_name" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x3ff62317, "local_bh_disable" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8BC0F5B3B0584574430D7EF");
