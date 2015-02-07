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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xba7921dc, "zlib_inflateEnd" },
	{ 0x70735fa2, "generic_file_llseek" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x3ed9ba61, "iget5_locked" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0xedefa2b2, "page_symlink_inode_operations" },
	{ 0xfadc1ec9, "generic_read_dir" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x1b7d4074, "printk" },
	{ 0x5f6bee61, "d_rehash" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0xe7a60ba8, "generic_ro_fops" },
	{ 0x2f0dab3a, "wait_on_page_bit" },
	{ 0x9edc2d7d, "read_cache_page_async" },
	{ 0xcdcde79f, "unlock_page" },
	{ 0x6b60eef6, "zlib_inflate" },
	{ 0xe1273530, "unlock_new_inode" },
	{ 0xa317307d, "kill_block_super" },
	{ 0x29543150, "register_filesystem" },
	{ 0x3b8be29d, "zlib_inflateInit2" },
	{ 0xf65b8e44, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xf56a3962, "zlib_inflateReset" },
	{ 0x813208bb, "get_sb_bdev" },
	{ 0x5e3b32a, "put_page" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0x57eb664f, "init_special_inode" },
	{ 0x18301a2a, "d_instantiate" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B951A5769CDAF15F2158EEE");
