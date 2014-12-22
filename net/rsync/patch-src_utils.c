$NetBSD$

--- src/utils.c.orig	2014-01-20 12:27:32.977797120 +0000
+++ src/utils.c
@@ -64,7 +64,9 @@ as that of the covered work.  */
 #include <sys/stat.h>
 
 /* For TIOCGWINSZ and friends: */
+#ifndef __HAIKU__
 #include <sys/ioctl.h>
+#endif
 #ifdef HAVE_TERMIOS_H
 # include <termios.h>
 #endif
