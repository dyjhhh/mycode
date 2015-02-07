cmd_arch/i386/kernel/entry.o := gcc -m32 -Wp,-MD,arch/i386/kernel/.entry.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -D__ASSEMBLY__ -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default  -c -o arch/i386/kernel/entry.o /workdir/source/linux-2.6.22.5/arch/i386/kernel/entry.S

deps_arch/i386/kernel/entry.o := \
  /workdir/source/linux-2.6.22.5/arch/i386/kernel/entry.S \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/vm86.h) \
    $(wildcard include/config/paravirt.h) \
    $(wildcard include/config/x86/mce.h) \
  /workdir/source/linux-2.6.22.5/include/linux/linkage.h \
  include2/asm/linkage.h \
    $(wildcard include/config/x86/alignment/16.h) \
  include2/asm/thread_info.h \
    $(wildcard include/config/4kstacks.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  /workdir/source/linux-2.6.22.5/include/linux/compiler.h \
    $(wildcard include/config/enable/must/check.h) \
  include2/asm/page.h \
    $(wildcard include/config/x86/use/3dnow.h) \
    $(wildcard include/config/x86/pae.h) \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/highmem4g.h) \
    $(wildcard include/config/highmem64g.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/flatmem.h) \
  /workdir/source/linux-2.6.22.5/include/asm-generic/memory_model.h \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/out/of/line/pfn/to/page.h) \
  /workdir/source/linux-2.6.22.5/include/asm-generic/page.h \
  include/asm/asm-offsets.h \
  include2/asm/irqflags.h \
  include2/asm/processor-flags.h \
  include2/asm/errno.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/errno.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/errno-base.h \
  include2/asm/segment.h \
    $(wildcard include/config/smp.h) \
  include2/asm/smp.h \
    $(wildcard include/config/x86/local/apic.h) \
    $(wildcard include/config/x86/io/apic.h) \
    $(wildcard include/config/hotplug/cpu.h) \
  include2/asm/desc.h \
  include2/asm/ldt.h \
  include2/asm/percpu.h \
  include2/asm/dwarf2.h \
    $(wildcard include/config/unwind/info.h) \
    $(wildcard include/config/as/cfi/signal/frame.h) \
  /workdir/source/linux-2.6.22.5/include/asm-i386/mach-default/irq_vectors.h \
  /workdir/source/linux-2.6.22.5/include/asm-i386/mach-default/irq_vectors_limits.h \
  /workdir/source/linux-2.6.22.5/include/asm-i386/mach-default/entry_arch.h \
    $(wildcard include/config/x86/smp.h) \
    $(wildcard include/config/x86/mce/p4thermal.h) \
  /workdir/source/linux-2.6.22.5/arch/i386/kernel/syscall_table.S \

arch/i386/kernel/entry.o: $(deps_arch/i386/kernel/entry.o)

$(deps_arch/i386/kernel/entry.o):
