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
__used
__attribute__((section("__versions"))) = {
	{ 0x34f24679, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb294dd6, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x3f862391, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x628121e9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0xdce5b8cd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xddca836a, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0xb9a5f6a4, __VMLINUX_SYMBOL_STR(dm_io) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x689fcb9b, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xdc13ef64, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0xd067fc5c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x5f2ea640, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3219dfaf, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x154c6338, __VMLINUX_SYMBOL_STR(dm_kcopyd_client_destroy) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x80806817, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x8256b41f, __VMLINUX_SYMBOL_STR(dm_kcopyd_copy) },
	{ 0x953ba505, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfcaa04a0, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0x9e4faeef, __VMLINUX_SYMBOL_STR(dm_io_client_destroy) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3973d092, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xc3363ea5, __VMLINUX_SYMBOL_STR(__blkdev_driver_ioctl) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x9336b077, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x468fc497, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa721d8b2, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x406c635f, __VMLINUX_SYMBOL_STR(pid_task) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x9c89c757, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xa31ccca5, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xac3d20e2, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd688716b, __VMLINUX_SYMBOL_STR(dm_kcopyd_client_create) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xcd758037, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x67cc86e8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x601f665f, __VMLINUX_SYMBOL_STR(dm_io_client_create) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x383987e, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x37e65889, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xcd7e43b4, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "15454EBA083976DB7B33768");
