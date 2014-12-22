$NetBSD$

--- regxml/compat.h.orig	2010-09-01 17:23:09.000000000 +0000
+++ regxml/compat.h
@@ -39,7 +39,7 @@
  * <sys/cdefs.h> compatibily.
  */
 #include <sys/cdefs.h>
-
+#include <private/libs/compat/freebsd_network/compat/sys/queue.h>
 #ifndef _DIAGASSERT
 #define _DIAGASSERT assert
 #endif
@@ -56,7 +56,6 @@
 /*
  * <sys/queue.h> compatibily.
  */
-#include <sys/queue.h>
 
 /*
  * Simple queue definitions.
