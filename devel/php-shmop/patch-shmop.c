$NetBSD$

--- shmop.c.orig	2014-09-17 07:03:27.000000000 +0000
+++ shmop.c
@@ -27,7 +27,7 @@
 #include "php_shmop.h"
 # ifndef PHP_WIN32
 # include <sys/ipc.h>
-# include <sys/shm.h>
+# include "shm.h"
 #else
 #include "tsrm_win32.h"
 #endif
