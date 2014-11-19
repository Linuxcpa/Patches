$NetBSD$

--- lib/tty/tty-ncurses.c.orig	2013-11-06 20:00:45.337903616 +0000
+++ lib/tty/tty-ncurses.c
@@ -63,7 +63,7 @@
 
 /*** file scope macro definitions **************************************/
 
-#if defined(_AIX) && !defined(CTRL)
+#if (defined(_AIX) || defined(__HAIKU__)) && !defined(CTRL)
 #   define CTRL(x) ((x) & 0x1f)
 #endif
 
