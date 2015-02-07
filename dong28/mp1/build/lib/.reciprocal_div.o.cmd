cmd_lib/reciprocal_div.o := gcc -m32 -Wp,-MD,lib/.reciprocal_div.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -I/workdir/source/linux-2.6.22.5/lib -Ilib -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -O0 -pipe -msoft-float -mregparm=3 -freg-struct-return -mpreferred-stack-boundary=2 -march=i686 -mtune=pentium2 -mtune=generic -ffreestanding -maccumulate-outgoing-args -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default -fomit-frame-pointer -g -fno-stack-protector -Wdeclaration-after-statement -Wno-pointer-sign  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(reciprocal_div)"  -D"KBUILD_MODNAME=KBUILD_STR(reciprocal_div)" -c -o lib/.tmp_reciprocal_div.o /workdir/source/linux-2.6.22.5/lib/reciprocal_div.c

deps_lib/reciprocal_div.o := \
  /workdir/source/linux-2.6.22.5/lib/reciprocal_div.c \
  include2/asm/div64.h \
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
  /workdir/source/linux-2.6.22.5/include/linux/reciprocal_div.h \

lib/reciprocal_div.o: $(deps_lib/reciprocal_div.o)

$(deps_lib/reciprocal_div.o):
