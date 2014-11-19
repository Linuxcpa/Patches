$NetBSD$

--- config/Haiku1.mk.orig	2014-07-18 05:35:23.731381760 +0000
+++ config/Haiku1.mk
@@ -0,0 +1,18 @@
+CFLAGS+=	-Wall -Wno-format
+OS_CFLAGS=	-DXP_UNIX -DSVR4 
+OS_CFLAGS+=	-DSYSV -D_BSD_SOURCE -DPOSIX_SOURCE # -DHAVE_LOCALTIME_R
+INTERP_CFLAGS+=	`pkg-config --cflags-only-I nspr`
+
+MKSHLIB = $(LD) `pkg-config --libs nspr` -shared $(LDFLAGS) $(XMKSHLIBOPTS)
+
+RANLIB = echo
+NO_LIBM = 1
+GFX_ARCH = x
+ 
+OS_CFLAGS = -DXP_UNIX -DSYSV -DSOLARIS -DHAVE_LOCALTIME_R
+OS_LIBS = -lnetwork -lroot $(LDFLAGS)
+
+ASFLAGS += -x assembler-with-cpp
+
+OS_CFLAGS += -DHAVE_VA_COPY -DVA_COPY=va_copy
+OS_CFLAGS += -DPIC -fPIC -DJS_HAVE_LONG_LONG -DHAVE_INTTYPES_H
