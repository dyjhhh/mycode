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
	{ 0xf6db042b, "inet_del_protocol" },
	{ 0x113f8c91, "xfrm_unregister_type" },
	{ 0xf81b8811, "inet_add_protocol" },
	{ 0xa4e263c1, "xfrm_register_type" },
	{ 0x382c1b4c, "xfrm4_rcv" },
	{ 0xf8b8c12a, "xfrm_aalg_get_byname" },
	{ 0x3c4440a0, "crypto_alloc_base" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x115828de, "crypto_free_tfm" },
	{ 0xa1c735b, "__xfrm_state_destroy" },
	{ 0xea14d8d4, "net_msg_warn" },
	{ 0x65d72cbd, "xfrm_state_lookup" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0x8faa81da, "___pskb_trim" },
	{ 0xde19bfde, "km_new_mapping" },
	{ 0xdfaeaa00, "skb_copy_bits" },
	{ 0x581a0674, "__pskb_pull_tail" },
	{ 0x2124474, "ip_send_check" },
	{ 0x401deb0a, "skb_icv_walk" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf023a04, "skb_to_sgvec" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8fa41e1d, "xfrm_replay_notify" },
	{ 0xfcd3831b, "netlink_has_listeners" },
	{ 0x3915895e, "xfrm_nl" },
	{ 0xe741827, "pskb_put" },
	{ 0xd3e73a99, "skb_cow_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BBA6D6C665ACDE13A0EB1C2");
