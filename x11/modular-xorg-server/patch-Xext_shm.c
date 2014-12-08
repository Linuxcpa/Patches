$NetBSD$

--- Xext/shm.c.orig	2012-08-02 00:55:58.023330816 +0000
+++ Xext/shm.c
@@ -31,10 +31,9 @@ in this Software without prior written a
 #ifdef HAVE_DIX_CONFIG_H
 #include <dix-config.h>
 #endif
-
+#include "shm.h"
 #include <sys/types.h>
 #include <sys/ipc.h>
-#include <sys/shm.h>
 #include <unistd.h>
 #include <sys/stat.h>
 #include <X11/X.h>
