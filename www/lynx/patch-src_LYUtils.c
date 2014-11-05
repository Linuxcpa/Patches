$NetBSD$

--- src/LYUtils.c.orig	2014-03-09 21:43:10.000000000 +0000
+++ src/LYUtils.c
@@ -1,6 +1,8 @@
 /*
  * $LynxId: LYUtils.c,v 1.266 2014/03/09 14:27:06 tom Exp $
  */
+ 
+#include <pwd.h>
 #include <HTUtils.h>
 #include <HTTCP.h>
 #include <HTParse.h>
