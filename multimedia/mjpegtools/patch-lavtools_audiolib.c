$NetBSD$

--- lavtools/audiolib.c.orig	2006-08-25 04:01:47.000000000 +0000
+++ lavtools/audiolib.c
@@ -53,7 +53,6 @@
 /* The shared memory things */
 
 #include <sys/ipc.h>
-#include <sys/shm.h>
 
 #ifndef FORK_NOT_THREAD
 #include <pthread.h>
