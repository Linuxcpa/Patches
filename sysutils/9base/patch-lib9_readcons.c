$NetBSD$

--- lib9/readcons.c.orig	2010-06-04 10:46:05.000000000 +0000
+++ lib9/readcons.c
@@ -2,7 +2,6 @@
 #define NOPLAN9DEFINES
 #include <libc.h>
 #include <termios.h>
-#include <sys/termios.h>
 
 static int
 rawx(int fd, int echoing)
