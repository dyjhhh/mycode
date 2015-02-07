cmd_fs/jbd/transaction.o := gcc -m32 -Wp,-MD,fs/jbd/.transaction.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -I/workdir/source/linux-2.6.22.5/fs/jbd -Ifs/jbd -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -O0 -pipe -msoft-float -mregparm=3 -freg-struct-return -mpreferred-stack-boundary=2 -march=i686 -mtune=pentium2 -mtune=generic -ffreestanding -maccumulate-outgoing-args -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default -fomit-frame-pointer -g -fno-stack-protector -Wdeclaration-after-statement -Wno-pointer-sign  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(transaction)"  -D"KBUILD_MODNAME=KBUILD_STR(jbd)" -c -o fs/jbd/.tmp_transaction.o /workdir/source/linux-2.6.22.5/fs/jbd/transaction.c

deps_fs/jbd/transaction.o := \
  /workdir/source/linux-2.6.22.5/fs/jbd/transaction.c \
  /workdir/source/linux-2.6.22.5/include/linux/time.h \
  /workdir/source/linux-2.6.22.5/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbd.h) \
    $(wildcard include/config/lsf.h) \
    $(wildcard include/config/resources/64bit.h) \
  /workdir/source/linux-2.6.22.5/include/linux/posix_types.h \
  /workdir/source/linux-2.6.22.5/include/linux/stddef.h \
  /workdir/source/linux-2.6.22.5/include/linux/compiler.h \
    $(wildcard include/config/enable/must/check.h) \
  /workdir/source/linux-2.6.22.5/include/linux/compiler-gcc4.h \
    $(wildcard include/config/forced/inlining.h) \
  /workdir/source/linux-2.6.22.5/include/linux/compiler-gcc.h \
  include2/asm/posix_types.h \
  include2/asm/types.h \
    $(wildcard include/config/highmem64g.h) \
  /workdir/source/linux-2.6.22.5/include/linux/seqlock.h \
  /workdir/source/linux-2.6.22.5/include/linux/spinlock.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  /workdir/source/linux-2.6.22.5/include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
  /workdir/source/linux-2.6.22.5/include/linux/thread_info.h \
  /workdir/source/linux-2.6.22.5/include/linux/bitops.h \
  include2/asm/bitops.h \
  include2/asm/alternative.h \
    $(wildcard include/config/paravirt.h) \
  /workdir/source/linux-2.6.22.5/include/asm-generic/bitops/sched.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/bitops/hweight.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/bitops/fls64.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/bitops/ext2-non-atomic.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/bitops/le.h \
  include2/asm/byteorder.h \
    $(wildcard include/config/x86/bswap.h) \
  /workdir/source/linux-2.6.22.5/include/linux/byteorder/little_endian.h \
  /workdir/source/linux-2.6.22.5/include/linux/byteorder/swab.h \
  /workdir/source/linux-2.6.22.5/include/linux/byteorder/generic.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/bitops/minix.h \
  include2/asm/thread_info.h \
    $(wildcard include/config/4kstacks.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  include2/asm/page.h \
    $(wildcard include/config/x86/use/3dnow.h) \
    $(wildcard include/config/x86/pae.h) \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/highmem4g.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/flatmem.h) \
  /workdir/source/linux-2.6.22.5/include/asm-generic/pgtable-nopmd.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/pgtable-nopud.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/memory_model.h \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/out/of/line/pfn/to/page.h) \
  /workdir/source/linux-2.6.22.5/include/asm-generic/page.h \
  include2/asm/processor.h \
    $(wildcard include/config/x86/ht.h) \
    $(wildcard include/config/mk8.h) \
    $(wildcard include/config/mk7.h) \
  include2/asm/vm86.h \
    $(wildcard include/config/vm86.h) \
  include2/asm/ptrace.h \
  include2/asm/ptrace-abi.h \
  include2/asm/segment.h \
  include2/asm/math_emu.h \
  include2/asm/sigcontext.h \
  include2/asm/cpufeature.h \
  include2/asm/required-features.h \
    $(wildcard include/config/x86/minimum/cpu.h) \
    $(wildcard include/config/x86/cmov.h) \
    $(wildcard include/config/x86/cmpxchg64.h) \
  include2/asm/msr.h \
  include2/asm/msr-index.h \
  include2/asm/errno.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/errno.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/errno-base.h \
  /workdir/source/linux-2.6.22.5/include/linux/errno.h \
  include2/asm/system.h \
    $(wildcard include/config/x86/oostore.h) \
  /workdir/source/linux-2.6.22.5/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/spinlock/sleep.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/numa.h) \
  /usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h \
  /workdir/source/linux-2.6.22.5/include/linux/linkage.h \
  include2/asm/linkage.h \
    $(wildcard include/config/x86/alignment/16.h) \
  /workdir/source/linux-2.6.22.5/include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include2/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  /workdir/source/linux-2.6.22.5/include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
  include2/asm/cmpxchg.h \
    $(wildcard include/config/x86/cmpxchg.h) \
  /workdir/source/linux-2.6.22.5/include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
    $(wildcard include/config/x86.h) \
  include2/asm/irqflags.h \
  include2/asm/processor-flags.h \
  /workdir/source/linux-2.6.22.5/include/linux/cache.h \
  include2/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  /workdir/source/linux-2.6.22.5/include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  include2/asm/percpu.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/percpu.h \
  /workdir/source/linux-2.6.22.5/include/linux/cpumask.h \
    $(wildcard include/config/hotplug/cpu.h) \
  /workdir/source/linux-2.6.22.5/include/linux/bitmap.h \
  /workdir/source/linux-2.6.22.5/include/linux/string.h \
  include2/asm/string.h \
  /workdir/source/linux-2.6.22.5/include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/acpi/hotplug/memory.h) \
  /workdir/source/linux-2.6.22.5/include/linux/stringify.h \
  /workdir/source/linux-2.6.22.5/include/linux/bottom_half.h \
  /workdir/source/linux-2.6.22.5/include/linux/spinlock_types.h \
  /workdir/source/linux-2.6.22.5/include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/generic/hardirqs.h) \
    $(wildcard include/config/prove/locking.h) \
  /workdir/source/linux-2.6.22.5/include/linux/spinlock_types_up.h \
  /workdir/source/linux-2.6.22.5/include/linux/spinlock_up.h \
  /workdir/source/linux-2.6.22.5/include/linux/spinlock_api_up.h \
  include2/asm/atomic.h \
    $(wildcard include/config/m386.h) \
  /workdir/source/linux-2.6.22.5/include/asm-generic/atomic.h \
  /workdir/source/linux-2.6.22.5/include/linux/fs.h \
    $(wildcard include/config/dnotify.h) \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/inotify.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/fs/xip.h) \
    $(wildcard include/config/migration.h) \
  /workdir/source/linux-2.6.22.5/include/linux/limits.h \
  /workdir/source/linux-2.6.22.5/include/linux/ioctl.h \
  include2/asm/ioctl.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/ioctl.h \
  /workdir/source/linux-2.6.22.5/include/linux/wait.h \
  /workdir/source/linux-2.6.22.5/include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  /workdir/source/linux-2.6.22.5/include/linux/poison.h \
  /workdir/source/linux-2.6.22.5/include/linux/prefetch.h \
  include2/asm/current.h \
  /workdir/source/linux-2.6.22.5/include/linux/kdev_t.h \
  /workdir/source/linux-2.6.22.5/include/linux/dcache.h \
    $(wildcard include/config/profiling.h) \
  /workdir/source/linux-2.6.22.5/include/linux/rcupdate.h \
  /workdir/source/linux-2.6.22.5/include/linux/percpu.h \
  /workdir/source/linux-2.6.22.5/include/linux/slab.h \
    $(wildcard include/config/slab/debug.h) \
    $(wildcard include/config/slab.h) \
    $(wildcard include/config/slub.h) \
    $(wildcard include/config/debug/slab.h) \
  /workdir/source/linux-2.6.22.5/include/linux/gfp.h \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/highmem.h) \
  /workdir/source/linux-2.6.22.5/include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/arch/populates/node/map.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
  /workdir/source/linux-2.6.22.5/include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  /workdir/source/linux-2.6.22.5/include/linux/nodemask.h \
  /workdir/source/linux-2.6.22.5/include/linux/memory_hotplug.h \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
  /workdir/source/linux-2.6.22.5/include/linux/notifier.h \
  /workdir/source/linux-2.6.22.5/include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
  /workdir/source/linux-2.6.22.5/include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  include2/asm/rwsem.h \
  /workdir/source/linux-2.6.22.5/include/linux/srcu.h \
  /workdir/source/linux-2.6.22.5/include/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
    $(wildcard include/config/sched/mc.h) \
  /workdir/source/linux-2.6.22.5/include/linux/smp.h \
  include2/asm/topology.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/topology.h \
  /workdir/source/linux-2.6.22.5/include/linux/slub_def.h \
  /workdir/source/linux-2.6.22.5/include/linux/workqueue.h \
  /workdir/source/linux-2.6.22.5/include/linux/timer.h \
    $(wildcard include/config/timer/stats.h) \
  /workdir/source/linux-2.6.22.5/include/linux/ktime.h \
    $(wildcard include/config/ktime/scalar.h) \
  /workdir/source/linux-2.6.22.5/include/linux/jiffies.h \
  /workdir/source/linux-2.6.22.5/include/linux/calc64.h \
  include2/asm/div64.h \
  /workdir/source/linux-2.6.22.5/include/linux/timex.h \
    $(wildcard include/config/time/interpolation.h) \
    $(wildcard include/config/no/hz.h) \
  include2/asm/param.h \
    $(wildcard include/config/hz.h) \
  include2/asm/timex.h \
    $(wildcard include/config/x86/elan.h) \
  include2/asm/tsc.h \
    $(wildcard include/config/x86/tsc.h) \
    $(wildcard include/config/x86/generic.h) \
  /workdir/source/linux-2.6.22.5/include/linux/kobject.h \
  /workdir/source/linux-2.6.22.5/include/linux/sysfs.h \
  /workdir/source/linux-2.6.22.5/include/linux/kref.h \
  /workdir/source/linux-2.6.22.5/include/linux/namei.h \
  /workdir/source/linux-2.6.22.5/include/linux/stat.h \
  include2/asm/stat.h \
  /workdir/source/linux-2.6.22.5/include/linux/radix-tree.h \
  /workdir/source/linux-2.6.22.5/include/linux/prio_tree.h \
  /workdir/source/linux-2.6.22.5/include/linux/pid.h \
  include2/asm/semaphore.h \
  /workdir/source/linux-2.6.22.5/include/linux/quota.h \
  /workdir/source/linux-2.6.22.5/include/linux/dqblk_xfs.h \
  /workdir/source/linux-2.6.22.5/include/linux/dqblk_v1.h \
  /workdir/source/linux-2.6.22.5/include/linux/dqblk_v2.h \
  /workdir/source/linux-2.6.22.5/include/linux/nfs_fs_i.h \
  /workdir/source/linux-2.6.22.5/include/linux/nfs.h \
  /workdir/source/linux-2.6.22.5/include/linux/sunrpc/msg_prot.h \
  /workdir/source/linux-2.6.22.5/include/linux/fcntl.h \
  include2/asm/fcntl.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/fcntl.h \
    $(wildcard include/config/64bit.h) \
  /workdir/source/linux-2.6.22.5/include/linux/err.h \
  /workdir/source/linux-2.6.22.5/include/linux/jbd.h \
    $(wildcard include/config/jbd/debug.h) \
    $(wildcard include/config/buffer/debug.h) \
  /workdir/source/linux-2.6.22.5/include/linux/buffer_head.h \
  /workdir/source/linux-2.6.22.5/include/linux/pagemap.h \
  /workdir/source/linux-2.6.22.5/include/linux/mm.h \
    $(wildcard include/config/sysctl.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/shmem.h) \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/debug/pagealloc.h) \
  /workdir/source/linux-2.6.22.5/include/linux/capability.h \
  /workdir/source/linux-2.6.22.5/include/linux/rbtree.h \
  /workdir/source/linux-2.6.22.5/include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  /workdir/source/linux-2.6.22.5/include/linux/backing-dev.h \
  /workdir/source/linux-2.6.22.5/include/linux/mm_types.h \
  include2/asm/pgtable.h \
    $(wildcard include/config/highpte.h) \
  include2/asm/fixmap.h \
    $(wildcard include/config/x86/local/apic.h) \
    $(wildcard include/config/x86/io/apic.h) \
    $(wildcard include/config/x86/visws/apic.h) \
    $(wildcard include/config/x86/f00f/bug.h) \
    $(wildcard include/config/x86/cyclone/timer.h) \
    $(wildcard include/config/acpi.h) \
    $(wildcard include/config/pci/mmconfig.h) \
  include2/asm/acpi.h \
    $(wildcard include/config/acpi/sleep.h) \
  /workdir/source/linux-2.6.22.5/include/acpi/pdc_intel.h \
  include2/asm/apicdef.h \
  include2/asm/paravirt.h \
  include2/asm/pgtable-2level-defs.h \
  include2/asm/pgtable-2level.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/pgtable.h \
  /workdir/source/linux-2.6.22.5/include/linux/page-flags.h \
    $(wildcard include/config/s390.h) \
    $(wildcard include/config/swap.h) \
  /workdir/source/linux-2.6.22.5/include/linux/vmstat.h \
    $(wildcard include/config/vm/event/counters.h) \
  /workdir/source/linux-2.6.22.5/include/linux/highmem.h \
  /workdir/source/linux-2.6.22.5/include/linux/uaccess.h \
  include2/asm/uaccess.h \
    $(wildcard include/config/x86/intel/usercopy.h) \
    $(wildcard include/config/x86/wp/works/ok.h) \
  include2/asm/cacheflush.h \
    $(wildcard include/config/debug/rodata.h) \
  include2/asm/kmap_types.h \
    $(wildcard include/config/debug/highmem.h) \
  /workdir/source/linux-2.6.22.5/include/linux/journal-head.h \
  /workdir/source/linux-2.6.22.5/include/linux/bit_spinlock.h \
  /workdir/source/linux-2.6.22.5/include/linux/sched.h \
    $(wildcard include/config/detect/softlockup.h) \
    $(wildcard include/config/keys.h) \
    $(wildcard include/config/bsd/process/acct.h) \
    $(wildcard include/config/taskstats.h) \
    $(wildcard include/config/inotify/user.h) \
    $(wildcard include/config/schedstats.h) \
    $(wildcard include/config/task/delay/acct.h) \
    $(wildcard include/config/blk/dev/io/trace.h) \
    $(wildcard include/config/cc/stackprotector.h) \
    $(wildcard include/config/sysvipc.h) \
    $(wildcard include/config/rt/mutexes.h) \
    $(wildcard include/config/task/xacct.h) \
    $(wildcard include/config/cpusets.h) \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/fault/injection.h) \
  /workdir/source/linux-2.6.22.5/include/linux/auxvec.h \
  include2/asm/auxvec.h \
  include2/asm/mmu.h \
  include2/asm/cputime.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/cputime.h \
  /workdir/source/linux-2.6.22.5/include/linux/sem.h \
  /workdir/source/linux-2.6.22.5/include/linux/ipc.h \
    $(wildcard include/config/ipc/ns.h) \
  include2/asm/ipcbuf.h \
  include2/asm/sembuf.h \
  /workdir/source/linux-2.6.22.5/include/linux/signal.h \
  include2/asm/signal.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/signal.h \
  include2/asm/siginfo.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/siginfo.h \
  /workdir/source/linux-2.6.22.5/include/linux/securebits.h \
  /workdir/source/linux-2.6.22.5/include/linux/fs_struct.h \
  /workdir/source/linux-2.6.22.5/include/linux/completion.h \
  /workdir/source/linux-2.6.22.5/include/linux/seccomp.h \
    $(wildcard include/config/seccomp.h) \
  /workdir/source/linux-2.6.22.5/include/linux/futex.h \
    $(wildcard include/config/futex.h) \
  /workdir/source/linux-2.6.22.5/include/linux/rtmutex.h \
    $(wildcard include/config/debug/rt/mutexes.h) \
  /workdir/source/linux-2.6.22.5/include/linux/plist.h \
    $(wildcard include/config/debug/pi/list.h) \
  /workdir/source/linux-2.6.22.5/include/linux/param.h \
  /workdir/source/linux-2.6.22.5/include/linux/resource.h \
  include2/asm/resource.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/resource.h \
  /workdir/source/linux-2.6.22.5/include/linux/hrtimer.h \
    $(wildcard include/config/high/res/timers.h) \
  /workdir/source/linux-2.6.22.5/include/linux/task_io_accounting.h \
    $(wildcard include/config/task/io/accounting.h) \
  /workdir/source/linux-2.6.22.5/include/linux/aio.h \
  /workdir/source/linux-2.6.22.5/include/linux/aio_abi.h \
  /workdir/source/linux-2.6.22.5/include/linux/uio.h \

fs/jbd/transaction.o: $(deps_fs/jbd/transaction.o)

$(deps_fs/jbd/transaction.o):
