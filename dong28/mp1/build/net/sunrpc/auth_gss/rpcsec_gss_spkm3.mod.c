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
	{ 0xc52ef5, "g_make_token_header" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xb9eabbbc, "gss_mech_register" },
	{ 0x7d11c268, "jiffies" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xf8b2ff6e, "g_verify_token_header" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0x1b7d4074, "printk" },
	{ 0x115828de, "crypto_free_tfm" },
	{ 0x9524a028, "gss_mech_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c137189, "xdr_process_buf" },
	{ 0xb5dea7ef, "g_token_size" },
	{ 0x3c4440a0, "crypto_alloc_base" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=auth_rpcgss,sunrpc";


MODULE_INFO(srcversion, "4B3AF85E4137F9E95D60D09");
