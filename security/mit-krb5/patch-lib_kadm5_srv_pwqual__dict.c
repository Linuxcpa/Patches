$NetBSD$

--- lib/kadm5/srv/pwqual_dict.c.orig	2014-10-30 20:43:15.758120448 +0000
+++ lib/kadm5/srv/pwqual_dict.c
@@ -29,6 +29,7 @@
 
 /* Password quality module to look up passwords within the realm dictionary. */
 
+#include <strings.h>
 #include "k5-platform.h"
 #include <krb5/pwqual_plugin.h>
 #include <sys/types.h>
