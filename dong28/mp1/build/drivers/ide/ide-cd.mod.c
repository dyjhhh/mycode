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
	{ 0xe8dc1a53, "driver_register" },
	{ 0x41b0be1a, "driver_unregister" },
	{ 0xa15530a9, "add_disk" },
	{ 0x83800bfa, "kref_init" },
	{ 0x705d8b93, "ide_proc_register_driver" },
	{ 0xd4587212, "ide_init_disk" },
	{ 0xb1121a56, "alloc_disk" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x3b6f3a2f, "cdrom_media_changed" },
	{ 0x4b005dd2, "cdrom_ioctl" },
	{ 0x79958680, "generic_ide_ioctl" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xa5bc7f5d, "cdrom_mode_select" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x2053d941, "cdrom_release" },
	{ 0x6c5903c1, "cdrom_open" },
	{ 0x7b487393, "ide_bus_type" },
	{ 0x97231db8, "__ide_abort" },
	{ 0xb202b408, "__ide_error" },
	{ 0x42860fdd, "put_disk" },
	{ 0x2af6044a, "unregister_cdrom" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1ac68e5, "del_gendisk" },
	{ 0x4a646c6e, "ide_proc_unregister_driver" },
	{ 0xcf986dbc, "blk_queue_dma_alignment" },
	{ 0xb54664e6, "blk_queue_prep_rq" },
	{ 0xb45120b6, "ide_add_setting" },
	{ 0x130487c9, "ide_dma_verbose" },
	{ 0x984e0b9e, "cdrom_number_of_slots" },
	{ 0xbd2dffc1, "register_cdrom" },
	{ 0xc819276b, "cdrom_get_media_event" },
	{ 0x3f38629b, "cdrom_mode_sense" },
	{ 0x4f476e96, "init_cdrom_command" },
	{ 0xc267b29e, "cdrom_get_last_written" },
	{ 0xe375f9b, "blk_queue_hardsect_size" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6c1962df, "ide_stall_queue" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xc3fc2ce, "ide_dma_off" },
	{ 0x9b05ea5c, "scsi_command_size" },
	{ 0xbe050f8d, "ide_set_handler" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3e5be809, "ide_execute_command" },
	{ 0x81a5cdc7, "ide_wait_stat" },
	{ 0x1d03bbfc, "blk_dump_rq_flags" },
	{ 0x903d42b5, "blk_plug_device" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb82f56ca, "elv_dequeue_request" },
	{ 0xba31298f, "ide_error" },
	{ 0xcdd0accc, "ide_dump_status" },
	{ 0xcac70f2, "ide_end_request" },
	{ 0x4724bc3a, "end_that_request_last" },
	{ 0x4a13eb53, "end_that_request_chunk" },
	{ 0x387602c2, "ide_end_dequeued_request" },
	{ 0x5e6cfa45, "ide_do_drive_cmd" },
	{ 0x3a6c2140, "ide_init_drive_cmd" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1b7d4074, "printk" },
	{ 0xd5b037e1, "kref_put" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x9775cdc, "kref_get" },
	{ 0x78d0ffc4, "mutex_lock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "48BA04B5E321B38D34DEF53");
