cmd_arch/i386/kernel/vsyscall.o := gcc -m32 -Wp,-MD,arch/i386/kernel/.vsyscall.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -D__ASSEMBLY__ -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default  -c -o arch/i386/kernel/vsyscall.o /workdir/source/linux-2.6.22.5/arch/i386/kernel/vsyscall.S

deps_arch/i386/kernel/vsyscall.o := \
  /workdir/source/linux-2.6.22.5/arch/i386/kernel/vsyscall.S \
  /workdir/source/linux-2.6.22.5/include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/acpi/hotplug/memory.h) \
  /workdir/source/linux-2.6.22.5/include/linux/compiler.h \
    $(wildcard include/config/enable/must/check.h) \

arch/i386/kernel/vsyscall.o: $(deps_arch/i386/kernel/vsyscall.o)

$(deps_arch/i386/kernel/vsyscall.o):
