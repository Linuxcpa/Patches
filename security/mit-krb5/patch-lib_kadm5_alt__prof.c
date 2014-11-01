$NetBSD$

--- lib/kadm5/alt_prof.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/kadm5/alt_prof.c
@@ -29,6 +29,8 @@
  */
 
 /* Implement alternate profile file handling. */
+
+#include <strings.h>
 #include "fake-addrinfo.h"
 #include "k5-int.h"
 #include <kadm5/admin.h>
