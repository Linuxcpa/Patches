$NetBSD$

--- util/qemu-openpty.c.orig	2014-08-01 14:12:17.000000000 +0000
+++ util/qemu-openpty.c
@@ -35,7 +35,9 @@
 #include "config-host.h"
 #include "qemu-common.h"
 
-#if defined(__GLIBC__)
+#if defined(__HAIKU__)
+# include <termios.h>
+#elif defined(__GLIBC__)
 # include <pty.h>
 #elif defined CONFIG_BSD
 # include <termios.h>
