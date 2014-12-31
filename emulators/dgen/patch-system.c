$NetBSD$

--- system.c.orig	2013-02-09 20:26:18.000000000 +0000
+++ system.c
@@ -1,3 +1,4 @@
+#include <strings.h>
 #include <sys/stat.h>
 #include <stdio.h>
 #include <stdint.h>
