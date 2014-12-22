$NetBSD$

--- src/mod_term/terminals.c.orig	2011-10-06 12:07:55.000000000 +0000
+++ src/mod_term/terminals.c
@@ -53,7 +53,7 @@
 /* On some system termio is either absent or including it will disable termios
    (HP-UX) */
 #if ! defined (__hpux__) && ! defined (FREEBSD) && ! defined (__APPLE__)
-#   include <termio.h>
+#   include <termios.h>
 #endif
 
 #include <sys/ioctl.h>
