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
	{ 0x79277ccf, "pci_bus_read_config_byte" },
	{ 0xb9105bcd, "uart_write_wakeup" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x69d6869, "uart_add_one_port" },
	{ 0xf6dab3ab, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x517377d, "pci_release_regions" },
	{ 0x5a42f4f8, "uart_unregister_driver" },
	{ 0xf72a09eb, "tty_buffer_request_room" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa80af2f3, "uart_remove_one_port" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x1b7d4074, "printk" },
	{ 0x1ef91023, "tty_ldisc_deref" },
	{ 0xdc9235e5, "tty_ldisc_ref" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x14bd510c, "tty_insert_flip_string_flags" },
	{ 0x2cf190e3, "request_irq" },
	{ 0xd4f2cf2, "dev_driver_string" },
	{ 0x6933757b, "tty_insert_flip_string" },
	{ 0xcccf24ad, "pci_unregister_driver" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xcc67386a, "tty_hangup" },
	{ 0xc281c899, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f32678c, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf664cb5c, "__pci_register_driver" },
	{ 0x318386ad, "uart_register_driver" },
	{ 0x649013ab, "tty_flip_buffer_push" },
	{ 0x85450ed, "pci_enable_device" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000114Fd000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CBsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F5AF3C964FAB24F159D027B");
