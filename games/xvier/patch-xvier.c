$NetBSD$

--- xvier.c.orig	1992-07-29 00:04:33.000000000 +0000
+++ xvier.c
@@ -5,7 +5,7 @@
 #include <signal.h>
 #include <sys/types.h>
 #include <sys/time.h>
-
+#include <sys/select.h>
 #include "xvier.h"
 
 char *malloc();
