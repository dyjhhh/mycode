cmd_fs/cifs/md5.o := gcc -m32 -Wp,-MD,fs/cifs/.md5.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -I/workdir/source/linux-2.6.22.5/fs/cifs -Ifs/cifs -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -O0 -pipe -msoft-float -mregparm=3 -freg-struct-return -mpreferred-stack-boundary=2 -march=i686 -mtune=pentium2 -mtune=generic -ffreestanding -maccumulate-outgoing-args -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default -fomit-frame-pointer -g -fno-stack-protector -Wdeclaration-after-statement -Wno-pointer-sign -DMODULE -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(md5)"  -D"KBUILD_MODNAME=KBUILD_STR(cifs)" -c -o fs/cifs/.tmp_md5.o /workdir/source/linux-2.6.22.5/fs/cifs/md5.c

deps_fs/cifs/md5.o := \
  /workdir/source/linux-2.6.22.5/fs/cifs/md5.c \
  /workdir/source/linux-2.6.22.5/include/linux/string.h \
  /workdir/source/linux-2.6.22.5/include/linux/compiler.h \
    $(wildcard include/config/enable/must/check.h) \
  /workdir/source/linux-2.6.22.5/include/linux/compiler-gcc4.h \
    $(wildcard include/config/forced/inlining.h) \
  /workdir/source/linux-2.6.22.5/include/linux/compiler-gcc.h \
  /workdir/source/linux-2.6.22.5/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbd.h) \
    $(wildcard include/config/lsf.h) \
    $(wildcard include/config/resources/64bit.h) \
  /workdir/source/linux-2.6.22.5/include/linux/posix_types.h \
  /workdir/source/linux-2.6.22.5/include/linux/stddef.h \
  include2/asm/posix_types.h \
  include2/asm/types.h \
    $(wildcard include/config/highmem64g.h) \
  include2/asm/string.h \
    $(wildcard include/config/x86/use/3dnow.h) \
  /workdir/source/linux-2.6.22.5/fs/cifs/md5.h \

fs/cifs/md5.o: $(deps_fs/cifs/md5.o)

$(deps_fs/cifs/md5.o):
