$NetBSD$

--- console.h.orig	2008-06-15 00:00:19.000000000 +0000
+++ console.h
@@ -2,7 +2,7 @@
 #include <sys/types.h>  // fd_set
 #include <stdarg.h>
 #include <stdio.h>
-
+#include <sys/select.h>
 #if defined(USE_TERMIOS)
 #include <termios.h>
 #elif defined(USE_TERMIO)
