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
	{ 0x4d28b566, "kmem_cache_destroy" },
	{ 0xef815afa, "__bread" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xedefa2b2, "page_symlink_inode_operations" },
	{ 0xfadc1ec9, "generic_read_dir" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x1b7d4074, "printk" },
	{ 0x5f6bee61, "d_rehash" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0xe7a60ba8, "generic_ro_fops" },
	{ 0xcdcde79f, "unlock_page" },
	{ 0x1a5df119, "__brelse" },
	{ 0x721d3133, "inode_init_once" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0xe1273530, "unlock_new_inode" },
	{ 0xa317307d, "kill_block_super" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0x29543150, "register_filesystem" },
	{ 0xf65b8e44, "iput" },
	{ 0x813208bb, "get_sb_bdev" },
	{ 0xd56afae9, "sb_set_blocksize" },
	{ 0x5e3b32a, "put_page" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0x57eb664f, "init_special_inode" },
	{ 0x18301a2a, "d_instantiate" },
	{ 0x59df7421, "iget_locked" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9B5A4B7B572023BCEC9A2E3");
