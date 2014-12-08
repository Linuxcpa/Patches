$NetBSD$

--- src/adplug.cpp.orig	2006-05-17 17:09:36.000000000 +0000
+++ src/adplug.cpp
@@ -18,7 +18,7 @@
  *
  * adplug.cpp - CAdPlug utility class, by Simon Peter <dn.tlp@gmx.net>
  */
-
+#include <strings.h>
 #include <string>
 #include <binfile.h>
 
