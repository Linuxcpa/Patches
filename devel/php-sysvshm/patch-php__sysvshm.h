$NetBSD$

--- php_sysvshm.h.orig	2014-09-17 07:03:27.000000000 +0000
+++ php_sysvshm.h
@@ -28,7 +28,7 @@ extern zend_module_entry sysvshm_module_
 
 #include <sys/types.h>
 #include <sys/ipc.h>
-#include <sys/shm.h>
+#include "shm.h"
 
 #define PHP_SHM_RSRC_NAME "sysvshm"
 
