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
	{ 0x757481d4, "rpcauth_register" },
	{ 0xaa36a8b4, "xdr_shift_buf" },
	{ 0xd2a5da6f, "auth_domain_put" },
	{ 0xe0383df9, "module_refcount" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd5b037e1, "kref_put" },
	{ 0x79353ac, "sunrpc_cache_update" },
	{ 0xbc4e0e63, "xdr_buf_read_netobj" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xa653de22, "rpc_unlink" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc5927a38, "rpc_init_wait_queue" },
	{ 0xf668ba9, "svc_auth_unregister" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xa6814433, "groups_free" },
	{ 0xf1a3902c, "cache_register" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x7d11c268, "jiffies" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xe1793ad1, "xdr_buf_subsegment" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0x87f3060d, "cache_check" },
	{ 0xb45ff141, "__alloc_pages" },
	{ 0xe75b20ba, "rpc_queue_upcall" },
	{ 0x1b7d4074, "printk" },
	{ 0xa892e98c, "sunrpc_cache_lookup" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x115828de, "crypto_free_tfm" },
	{ 0x611809ea, "rpcauth_init_credcache" },
	{ 0xe97f4ce5, "qword_get" },
	{ 0xc8e96dea, "qword_addhex" },
	{ 0x6c152741, "rpcauth_lookup_credcache" },
	{ 0x5b96bf3f, "cache_unregister" },
	{ 0x80235cd9, "contig_page_data" },
	{ 0xe1a30b34, "module_put" },
	{ 0xc4bbe2c8, "rpcauth_free_credcache" },
	{ 0x6696f5bc, "__free_pages" },
	{ 0xa7aaf1ab, "svc_auth_register" },
	{ 0x2eec63c9, "xdr_encode_netobj" },
	{ 0xea02ced5, "rpc_wake_up_status" },
	{ 0x4292364c, "schedule" },
	{ 0xd698eea5, "auth_domain_lookup" },
	{ 0x42d5907d, "rpc_sleep_on" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xc281c899, "__wake_up" },
	{ 0x91ba4b1f, "rpcauth_unregister" },
	{ 0x112f51, "groups_alloc" },
	{ 0x83800bfa, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0x9775cdc, "kref_get" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0x70955b1b, "read_bytes_from_xdr_buf" },
	{ 0x1813a42e, "rpc_mkpipe" },
	{ 0x1c137189, "xdr_process_buf" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8235805b, "memmove" },
	{ 0xb7a0ce7e, "auth_domain_find" },
	{ 0x3c4440a0, "crypto_alloc_base" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0xdae2aa, "xdr_buf_from_iov" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sunrpc";


MODULE_INFO(srcversion, "2F3D5300F39C856EDA0FCCC");
