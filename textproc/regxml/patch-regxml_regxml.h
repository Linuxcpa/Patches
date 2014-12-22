$NetBSD$

--- regxml/regxml.h.orig	2010-09-01 17:23:09.000000000 +0000
+++ regxml/regxml.h
@@ -30,8 +30,7 @@
 #define REGXML_H
 
 #include <sys/cdefs.h>
-#include <sys/queue.h>
-
+#include <private/libs/compat/freebsd_network/compat/sys/queue.h>
 #include <limits.h>
 #include <regex.h>
 #include <stdlib.h>
