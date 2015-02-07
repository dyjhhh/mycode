cmd_scripts/bin2c := gcc -Wp,-MD,scripts/.bin2c.d -Iscripts -Wall -Wstrict-prototypes -O0 -fomit-frame-pointer -o scripts/bin2c /workdir/source/linux-2.6.22.5/scripts/bin2c.c  

deps_scripts/bin2c := \
  /workdir/source/linux-2.6.22.5/scripts/bin2c.c \
  /usr/include/stdio.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-32.h \
  /usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \

scripts/bin2c: $(deps_scripts/bin2c)

$(deps_scripts/bin2c):
