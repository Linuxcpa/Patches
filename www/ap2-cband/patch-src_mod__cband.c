$NetBSD$

--- src/mod_cband.c.orig	2006-11-14 21:23:36.000000000 +0000
+++ src/mod_cband.c
@@ -52,7 +52,6 @@
 #include "apr_shm.h"
 #include "util_filter.h"
 #include "util_cfgtree.h"
-#include <sys/shm.h>
 #include <sys/types.h>
 #include <sys/ipc.h>
 #include <sys/sem.h>
