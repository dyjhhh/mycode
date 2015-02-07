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
	{ 0xeb3591fe, "fat_detach" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x338bbfc5, "__mark_inode_dirty" },
	{ 0x77f36df8, "d_invalidate" },
	{ 0x5e6ad92f, "dput" },
	{ 0x1369964e, "d_find_alias" },
	{ 0xba0507af, "fat_sync_inode" },
	{ 0xff5530b5, "fat_add_entries" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6d1b1d24, "fat_remove_entries" },
	{ 0x1dc36aaa, "fat_notify_change" },
	{ 0xc509553, "fat_alloc_new_dir" },
	{ 0xb56717cf, "xtime" },
	{ 0xf60f9f98, "fat_fill_super" },
	{ 0xeb9db3b3, "fat_build_inode" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x3c54222a, "fat_attach" },
	{ 0x646581f9, "sync_dirty_buffer" },
	{ 0x6fb54733, "fat_getattr" },
	{ 0x7d850612, "utf8_mbstowcs" },
	{ 0x1a5df119, "__brelse" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xa317307d, "kill_block_super" },
	{ 0xa7944a10, "fat_search_long" },
	{ 0x8b18831, "fat_date_unix2dos" },
	{ 0xdf863c9f, "fat_scan" },
	{ 0x29543150, "register_filesystem" },
	{ 0x9941ccb8, "free_pages" },
	{ 0xf65b8e44, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xd52a7e1a, "d_splice_alias" },
	{ 0x813208bb, "get_sb_bdev" },
	{ 0x96e07992, "fat_free_clusters" },
	{ 0x59e21f79, "fat_get_dotdot_entry" },
	{ 0x75c563ed, "fat_fs_panic" },
	{ 0x410fdcb, "mark_buffer_dirty" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0xb5aea52e, "fat_dir_empty" },
	{ 0x18301a2a, "d_instantiate" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=fat";


MODULE_INFO(srcversion, "DDFAF2727CC580C9F9AFF9C");
