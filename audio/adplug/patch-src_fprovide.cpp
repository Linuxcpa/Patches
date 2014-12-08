$NetBSD$

--- src/fprovide.cpp.orig	2006-05-13 05:36:42.000000000 +0000
+++ src/fprovide.cpp
@@ -18,7 +18,7 @@
  *
  * fprovide.cpp - File provider class framework, by Simon Peter <dn.tlp@gmx.net>
  */
-
+#include <strings.h>
 #include <string.h>
 #include <binio.h>
 #include <binfile.h>
