$NetBSD$

--- WinQuake/sys_linux.c.orig	1999-04-19 12:47:52.000000000 +0000
+++ WinQuake/sys_linux.c
@@ -9,16 +9,17 @@
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
-
+#ifndef FNDELAY
+#define FNDELAY O_NDELAY
+#endif
 qboolean			isDedicated;
 
 int nostdout = 0;
