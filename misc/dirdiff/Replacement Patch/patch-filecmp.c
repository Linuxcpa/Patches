$NetBSD: patch-filecmp.c,v 1.1 2014/01/20 19:20:08 joerg Exp $

--- filecmp.c.orig	2005-04-19 10:22:01.007077888 +0000
+++ filecmp.c
@@ -10,7 +10,8 @@
 #include <string.h>
 #include <ctype.h>
 #include <tcl.h>
-#include <sys/fcntl.h>
+#include <unistd.h>
+#include <fcntl.h>
 
 #define BSIZE		32768
 #define MAXTAGLEN	512	/* max tag length for sanity, < BSIZE */
