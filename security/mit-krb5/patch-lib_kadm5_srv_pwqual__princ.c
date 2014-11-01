$NetBSD$

--- lib/kadm5/srv/pwqual_princ.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/kadm5/srv/pwqual_princ.c
@@ -26,6 +26,7 @@
 
 /* Password quality module to check passwords against principal components */
 
+#include <strings.h>
 #include "k5-platform.h"
 #include <krb5/pwqual_plugin.h>
 #include "server_internal.h"
