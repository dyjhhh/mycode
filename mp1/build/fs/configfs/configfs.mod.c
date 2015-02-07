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
	{ 0xf7e17db7, "simple_pin_fs" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1e796b5e, "kernel_subsys" },
	{ 0xd5b037e1, "kref_put" },
	{ 0x2c2512ea, "get_zeroed_page" },
	{ 0x6ad778e5, "up_read" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x70735fa2, "generic_file_llseek" },
	{ 0xc045ad4e, "timespec_trunc" },
	{ 0xb61d8771, "subsystem_unregister" },
	{ 0xef0928e, "simple_release_fs" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0x33b9c1c1, "simple_commit_write" },
	{ 0x3622fe57, "simple_lookup" },
	{ 0xaf579e54, "generic_delete_inode" },
	{ 0x5e6ad92f, "dput" },
	{ 0x77eea64b, "dget_locked" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0xfadc1ec9, "generic_read_dir" },
	{ 0x99b049f7, "inode_setattr" },
	{ 0xbce67cc4, "down_read" },
	{ 0xbcf9708a, "d_delete" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x4d0eee6f, "subsystem_register" },
	{ 0x7fae9b06, "get_sb_single" },
	{ 0x565aed7e, "kill_litter_super" },
	{ 0x1b7d4074, "printk" },
	{ 0x5f6bee61, "d_rehash" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0xcb7e2460, "simple_readpage" },
	{ 0xcfffeb32, "path_release" },
	{ 0xe1a30b34, "module_put" },
	{ 0x7dceceac, "capable" },
	{ 0x9efeae80, "simple_unlink" },
	{ 0x39882d2b, "path_lookup" },
	{ 0xbbe98b02, "d_alloc" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xc3cf1128, "in_group_p" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe12cdd56, "inode_change_ok" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0x29543150, "register_filesystem" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0x6989a769, "vsnprintf" },
	{ 0x9941ccb8, "free_pages" },
	{ 0xfd516eca, "kmem_cache_zalloc" },
	{ 0xf65b8e44, "iput" },
	{ 0x83800bfa, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x64ee20b8, "iunique" },
	{ 0x9775cdc, "kref_get" },
	{ 0x8d928da5, "generic_readlink" },
	{ 0xcaa413ee, "simple_statfs" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0x25da070, "snprintf" },
	{ 0xe88c3d68, "new_inode" },
	{ 0x96b27088, "__down_failed" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x18301a2a, "d_instantiate" },
	{ 0x4ca31af7, "simple_rmdir" },
	{ 0x98d86a79, "simple_prepare_write" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FF199D521EE56FFB84E8435");
