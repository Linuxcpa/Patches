$NetBSD$

--- fattr.c.orig	2010-04-04 19:34:56.000000000 +0000
+++ fattr.c
@@ -25,7 +25,7 @@
  *
  * $FreeBSD: src/usr.bin/csup/fattr.c,v 1.1 2010/03/02 07:26:07 lulf Exp $
  */
-
+#include <stdint.h>
 #include <sys/time.h>
 #include <sys/types.h>
 #include <sys/stat.h>
