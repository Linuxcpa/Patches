$NetBSD$

--- src/string.cpp.orig	2007-03-09 15:58:53.000000000 +0000
+++ src/string.cpp
@@ -5,7 +5,7 @@
 /** @file
  * yet another string implementation
  */
-
+#include <strings.h>
 #include "header.h"
 
 /* these definitions could be used instead of header.h ...
