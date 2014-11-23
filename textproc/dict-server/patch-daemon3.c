$NetBSD$

--- daemon3.c.orig	2007-12-29 13:16:10.000000000 +0000
+++ daemon3.c
@@ -1,6 +1,6 @@
 #include <sys/ioctl.h>
 #include <sys/stat.h>
-#include <sys/termios.h>
+#include <termios.h>
 #include <fcntl.h>
 
 #include "dictd.h"
@@ -31,14 +31,6 @@ int daemon (int nochdir, int noclose)
 #endif /* TIOCNOTTY */
 #endif /* strange platforms */
 
-#ifndef NO_IOCTL_TIOCNOTTY
-   if ((fd = open("/dev/tty", O_RDWR)) >= 0) {
-				/* detach from controlling tty */
-      ioctl(fd, TIOCNOTTY, 0);
-      close(fd);
-   }
-#endif
-
    if (!nochdir)
       chdir("/");		/* cd to safe directory */
 
