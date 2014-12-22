$NetBSD$

--- smbval/rfcnb-io.inc.c.orig	2003-06-05 19:56:17.000000000 +0000
+++ smbval/rfcnb-io.inc.c
@@ -27,7 +27,7 @@
 #include "rfcnb-util.h"
 #include "rfcnb-io.h"
 #include <sys/uio.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <string.h>
 
 static int RFCNB_Timeout = 0;   /* Timeout in seconds ... */
