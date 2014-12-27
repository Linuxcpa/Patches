$NetBSD$

--- main.c.orig	2014-07-24 22:47:09.000000000 +0000
+++ main.c
@@ -4250,10 +4250,7 @@ spawnXTerm(XtermWidget xw)
 	    setsid();
 	    ioctl(0, TIOCSCTTY, 0);
 #endif
-	    ioctl(0, TIOCSPGRP, (char *) &pgrp);
-	    setpgrp(0, 0);
-	    close(open(ttydev, O_WRONLY));
-	    setpgrp(0, pgrp);
+
 #if defined(__QNX__)
 	    tcsetpgrp(0, pgrp /*setsid() */ );
 #endif
