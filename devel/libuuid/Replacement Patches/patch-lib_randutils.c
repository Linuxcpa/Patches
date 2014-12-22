$NetBSD: patch-lib_randutils.c,v 1.1 2014/05/11 04:59:07 pho Exp $

O_CLOEXEC is not available on every platform (e.g. MacOS X < 10.7). It
was introduced in POSIX 2008.

--- lib/randutils.c.orig	2014-12-16 05:57:37.721944576 +0000
+++ lib/randutils.c
@@ -13,7 +13,9 @@
 #include <string.h>
 #include <sys/time.h>
 
+#ifndef __HAIKU__
 #include <sys/syscall.h>
+#endif
 
 #include "randutils.h"
@@ -28,6 +28,10 @@
 THREAD_LOCAL unsigned short ul_jrand_seed[3];
 #endif
 
+#if !defined(O_CLOEXEC)
+#define O_CLOEXEC 0
+#endif
+
 int random_get_fd(void)
 {
 	int i, fd;

