cmd_.tmp_kallsyms3.o := gcc -m32 -Wp,-MD,./..tmp_kallsyms3.o.d -D__ASSEMBLY__ -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -Iinclude/asm-i386/mach-default   -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h    -c -o .tmp_kallsyms3.o .tmp_kallsyms3.S

deps_.tmp_kallsyms3.o := \
  .tmp_kallsyms3.S \
  include2/asm/types.h \
    $(wildcard include/config/highmem64g.h) \

.tmp_kallsyms3.o: $(deps_.tmp_kallsyms3.o)

$(deps_.tmp_kallsyms3.o):
