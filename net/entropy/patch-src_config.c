$NetBSD$

--- src/config.c.orig	2005-07-28 18:37:16.000000000 +0000
+++ src/config.c
@@ -26,7 +26,7 @@
 #include "memalloc.h"
 #include "shmalloc.h"
 #include "logger.h"
-
+#include <strings.h>
 configuration_t *g_conf = NULL;
 
 static const char *str_loglevel[] = {
