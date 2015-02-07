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
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xe5fe5eb7, "register_sysctl_table" },
	{ 0xbd26548a, "proc_dointvec" },
	{ 0x4466b64d, "blk_put_request" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xca61ba52, "blk_rq_unmap_user" },
	{ 0x8b18496f, "__copy_to_user_ll" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xed49808, "invalidate_bdev" },
	{ 0xef4e4156, "check_disk_change" },
	{ 0x1b7d4074, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xcf6e055a, "blk_rq_map_user" },
	{ 0xeb2589a5, "proc_dostring" },
	{ 0x7dceceac, "capable" },
	{ 0xa1ec8b47, "unregister_sysctl_table" },
	{ 0xee389597, "blk_execute_rq" },
	{ 0x37a0cba, "kfree" },
	{ 0x92c24e52, "scsi_cmd_ioctl" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xccb17bd3, "blk_get_request" },
	{ 0xd6c963c, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "377B6FDFA1E9C7B5C22AD52");
