#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xfc4fa38d, "struct_module" },
	{ 0x21a92bab, "pci_scan_bus_parented" },
	{ 0x852abecf, "__request_region" },
	{ 0x79277ccf, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6402aaff, "release_resource" },
	{ 0xd7aa4aa8, "boot_cpu_data" },
	{ 0x76541a6, "pci_bus_write_config_word" },
	{ 0xd4a0d5c0, "pci_get_bus_and_slot" },
	{ 0xf5633477, "dmi_check_system" },
	{ 0xb407b205, "ioport_resource" },
	{ 0x1b7d4074, "printk" },
	{ 0x82c3213, "pci_root_buses" },
	{ 0xf3ac069b, "pci_bus_write_config_dword" },
	{ 0x6e90ef7c, "pci_bus_add_devices" },
	{ 0x125bf5e3, "pci_find_bus" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0x68637ff6, "pci_find_capability" },
	{ 0x73d58acd, "pci_bus_read_config_word" },
	{ 0x2041dec5, "pci_bus_read_config_dword" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xf41ac95b, "pci_find_next_bus" },
	{ 0x9941ccb8, "free_pages" },
	{ 0xee39479e, "pci_bus_write_config_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0xed39c825, "remap_pfn_range" },
	{ 0x8f380eed, "pci_get_device" },
	{ 0x19bdb78a, "pci_find_parent_resource" },
	{ 0x9d43755c, "request_resource" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=built-in,built-in,built-in,built-in";

