$NetBSD$

--- regxml/regxml.c.orig	2010-09-01 17:23:09.000000000 +0000
+++ regxml/regxml.c
@@ -29,7 +29,7 @@
 /* LINTLIBRARY */
 
 #include <sys/cdefs.h>
-#include <sys/queue.h>
+#include <private/libs/compat/freebsd_network/compat/sys/queue.h>
 
 #include <assert.h>
 #include <ctype.h>
