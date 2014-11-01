$NetBSD$

--- lib/krb5/krb/appdefault.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ lib/krb5/krb/appdefault.c
@@ -4,6 +4,7 @@
  *               handle the [appdefaults] profile section
  */
 
+#include <strings.h>
 #include <stdio.h>
 #include <string.h>
 #include "k5-int.h"
