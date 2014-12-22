$NetBSD$

--- nss/coreconf/BeOS.mk.orig	2014-09-23 18:27:49.000000000 +0000
+++ nss/coreconf/BeOS.mk
@@ -7,7 +7,7 @@ include $(CORE_DEPTH)/coreconf/UNIX.mk
 
 XP_DEFINE := $(XP_DEFINE:-DXP_UNIX=-DXP_BEOS)
 
-USE_PTHREADS = 
+USE_PTHREADS = 1
 
 ifeq ($(USE_PTHREADS),1)
 	IMPL_STRATEGY = _PTH
@@ -27,7 +27,7 @@ else
 	CPU_ARCH	= x86
 endif
 
-MKSHLIB		= $(CC) -nostart -Wl,-soname -Wl,$(@:$(OBJDIR)/%.so=%.so)
+MKSHLIB		= $(CC) -shared -Wl,-soname -Wl,$(@:$(OBJDIR)/%.so=%.so)
 ifdef BUILD_OPT
 	OPTIMIZER	= -O2
 endif
@@ -45,3 +45,8 @@ ARCH			= beos
 
 DSO_CFLAGS		= -fPIC
 DSO_LDOPTS		=
+
+ SKIP_SHLIBSIGN=1
+USE_SYSTEM_ZLIB = 1
+ZLIB_LIBS = -lz
+NSS_USE_SYSTEM_SQLITE=1
