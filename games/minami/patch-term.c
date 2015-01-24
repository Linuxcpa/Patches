$NetBSD$

--- term.c.orig	2001-03-08 17:02:48.000000000 +0000
+++ term.c
@@ -10,13 +10,13 @@
 #include <termcap.h>
 #endif
 #include <sys/ioctl.h>
-#include <sys/termios.h>
+#include <termios.h>
 #include <fcntl.h>
 #include <string.h>
 #include <sys/types.h>
 #include <sys/time.h>
 #include <unistd.h>
-
+#include <sys/select.h>
 #include "minami.h"
 
 static struct termios tbuf_save;
