$NetBSD$

--- src/fieldsplit/fieldsplit.c.orig	2013-05-15 20:48:44.000000000 +0000
+++ src/fieldsplit/fieldsplit.c
@@ -1,6 +1,7 @@
 /********************************
   copyright
  ********************************/
+#include <stdint.h>
 #ifdef HAVE_CONFIG_H
 # include <config.h>
 #endif
