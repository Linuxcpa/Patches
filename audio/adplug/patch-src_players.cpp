$NetBSD$

--- src/players.cpp.orig	2006-05-13 05:36:42.000000000 +0000
+++ src/players.cpp
@@ -18,7 +18,7 @@
  *
  * players.h - Players enumeration, by Simon Peter <dn.tlp@gmx.net>
  */
-
+#include <strings.h>
 #include <stdlib.h>
 #include <string.h>
 
