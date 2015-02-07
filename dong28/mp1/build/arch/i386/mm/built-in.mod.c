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
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x6ad778e5, "up_read" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xddb12f67, "vmalloc_earlyreserve" },
	{ 0x54f9a36e, "init_mm" },
	{ 0xd7aa4aa8, "boot_cpu_data" },
	{ 0x22e2c20b, "atomic_notifier_chain_unregister" },
	{ 0xbce67cc4, "down_read" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x28b2cc80, "atomic_notifier_call_chain" },
	{ 0xb45ff141, "__alloc_pages" },
	{ 0x1b7d4074, "printk" },
	{ 0x1075bf0, "panic" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x948cde9, "num_physpages" },
	{ 0x7ea7d551, "do_exit" },
	{ 0x80235cd9, "contig_page_data" },
	{ 0xb85b2bac, "vm_stat" },
	{ 0x252cdb09, "__handle_mm_fault" },
	{ 0x8b1e7123, "find_vma" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0x6696f5bc, "__free_pages" },
	{ 0xe8f04c56, "per_cpu__gdt_page" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x39819646, "atomic_notifier_chain_register" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x15042031, "down_read_trylock" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ead430, "vunmap" },
	{ 0x5e3b32a, "put_page" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x96b27088, "__down_failed" },
	{ 0x760a0f4f, "yield" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=built-in,built-in,built-in,init_task";

