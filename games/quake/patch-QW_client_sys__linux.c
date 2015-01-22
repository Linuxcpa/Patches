$NetBSD$

--- QW/client/sys_linux.c.orig	1999-12-21 18:46:02.000000000 +0000
+++ QW/client/sys_linux.c
@@ -28,15 +28,17 @@ Foundation, Inc., 59 Temple Place - Suit
 #include <stdarg.h>
 #include <stdio.h>
 #include <sys/ipc.h>
-#include <sys/shm.h>
 #include <sys/stat.h>
 #include <string.h>
 #include <ctype.h>
 #include <sys/wait.h>
 #include <sys/mman.h>
 #include <errno.h>
-
+#include <sys/select.h>
 #include "quakedef.h"
+#ifndef FNDELAY
+#define FNDELAY O_NDELAY
+#endif
 
 int noconinput = 0;
 int nostdout = 0;
@@ -126,6 +128,7 @@ void Sys_Printf (char *fmt, ...)
 
 void Sys_Quit (void)
 {
+	
 	Host_Shutdown();
     fcntl (0, F_SETFL, fcntl (0, F_GETFL, 0) & ~FNDELAY);
 	exit(0);
