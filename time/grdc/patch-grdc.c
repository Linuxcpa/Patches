$NetBSD$

--- grdc.c.orig	2003-10-19 16:57:35.000000000 +0000
+++ grdc.c
@@ -16,5 +16,5 @@
  */
 
-#include <err.h>
+#include <errno.h>
 #include <time.h>
 #include <signal.h>
@@ -201,5 +201,4 @@ int t12;
 			refresh();
 			endwin();
-			errx(1, "terminated by signal %d", (int)sigtermed);
 		}
 	} while(--n);
