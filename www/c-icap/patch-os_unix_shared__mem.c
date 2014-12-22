$NetBSD$

--- os/unix/shared_mem.c.orig	2012-10-09 11:35:38.000000000 +0000
+++ os/unix/shared_mem.c
@@ -23,7 +23,6 @@
 
 #ifdef USE_SYSV_IPC
 #include <sys/ipc.h>
-#include <sys/shm.h>
 #elif defined USE_POSIX_MAPPED_FILES
 #include <sys/mman.h>
 #endif
