$NetBSD$

--- src/netplay.cpp.orig	2010-05-30 04:17:59.000000000 +0000
+++ src/netplay.cpp
@@ -18,7 +18,7 @@
 // Protocol versions:
 //  1 - I forgot!
 //  2 - Added support for more versatile input configurations...somewhat
-
+#include <strings.h>
 #include "mednafen.h"
 
 #include <stdarg.h>
