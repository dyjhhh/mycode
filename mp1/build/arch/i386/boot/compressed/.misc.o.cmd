cmd_arch/i386/boot/compressed/misc.o := gcc -m32 -Wp,-MD,arch/i386/boot/compressed/.misc.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -I/workdir/source/linux-2.6.22.5/arch/i386/boot/compressed -Iarch/i386/boot/compressed -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -O0 -pipe -msoft-float -mregparm=3 -freg-struct-return -mpreferred-stack-boundary=2 -march=i686 -mtune=pentium2 -mtune=generic -ffreestanding -maccumulate-outgoing-args -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default -fomit-frame-pointer -g -fno-stack-protector -Wdeclaration-after-statement -Wno-pointer-sign -fPIC  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(misc)"  -D"KBUILD_MODNAME=KBUILD_STR(misc)" -c -o arch/i386/boot/compressed/.tmp_misc.o /workdir/source/linux-2.6.22.5/arch/i386/boot/compressed/misc.c

deps_arch/i386/boot/compressed/misc.o := \
  /workdir/source/linux-2.6.22.5/arch/i386/boot/compressed/misc.c \
    $(wildcard include/config/paravirt.h) \
    $(wildcard include/config/x86/numaq.h) \
    $(wildcard include/config/physical/align.h) \
    $(wildcard include/config/relocatable.h) \
  /workdir/source/linux-2.6.22.5/include/linux/linkage.h \
  include2/asm/linkage.h \
    $(wildcard include/config/x86/alignment/16.h) \
  /workdir/source/linux-2.6.22.5/include/linux/vmalloc.h \
  /workdir/source/linux-2.6.22.5/include/linux/spinlock.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  /workdir/source/linux-2.6.22.5/include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
  /workdir/source/linux-2.6.22.5/include/linux/thread_info.h \
  /workdir/source/linux-2.6.22.5/include/linux/bitops.h \
  include2/asm/types.h \
    $(wildcard include/config/highmem64g.h) \
  include2/asm/bitops.h \
  /workdir/source/linux-2.6.22.5/include/linux/compiler.h \
    $(wildcard include/config/enable/must/check.h) \
  /workdir/source/linux-2.6.22.5/include/linux/compiler-gcc4.h \
    $(wildcard include/config/forced/inlining.h) \
  /workdir/source/linux-2.6.22.5/include/linux/compiler-gcc.h \
  include2/asm/alternative.h \
  /workdir/source/linux-2.6.22.5/include/linux/stddef.h \
  /workdir/source/linux-2.6.22.5/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbd.h) \
    $(wildcard include/config/lsf.h) \
    $(wildcard include/config/resources/64bit.h) \
  /workdir/source/linux-2.6.22.5/include/linux/posix_types.h \
  include2/asm/posix_types.h \
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
  /workdir/source/linux-2.6.22.5/include/linux/screen_info.h \
  include2/asm/io.h \
    $(wildcard include/config/x86/ppro/fence.h) \
  /workdir/source/linux-2.6.22.5/include/asm-generic/iomap.h \
  include2/asm/boot.h \
    $(wildcard include/config/physical/start.h) \
  /workdir/source/linux-2.6.22.5/arch/i386/boot/compressed/../../../../lib/inflate.c \

arch/i386/boot/compressed/misc.o: $(deps_arch/i386/boot/compressed/misc.o)

$(deps_arch/i386/boot/compressed/misc.o):
