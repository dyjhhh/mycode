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
	{ 0x4877f6e3, "bus_register" },
	{ 0x5a23615, "class_register" },
	{ 0xe8dc1a53, "driver_register" },
	{ 0x86135f87, "__i2c_board_lock" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x88ce4ace, "wait_for_completion" },
	{ 0xd6bf80bd, "device_register" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x3e2a00f2, "class_unregister" },
	{ 0x50e7193a, "__i2c_first_dynamic_bus_num" },
	{ 0x41b0be1a, "driver_unregister" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0xee53ae06, "bus_unregister" },
	{ 0xe64517b0, "idr_remove" },
	{ 0xd4fe24f5, "idr_pre_get" },
	{ 0xe1a30b34, "module_put" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xd4f2cf2, "dev_driver_string" },
	{ 0xfc91d124, "platform_bus" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xd09a6a3d, "idr_get_new_above" },
	{ 0x343bdf1, "__i2c_board_list" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcc5ab2d, "device_unregister" },
	{ 0xa9392f2b, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0xf03b0e52, "idr_find" },
	{ 0x45e87ae6, "add_uevent_var" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "705AD411F6BA8C8F1A6E48D");
