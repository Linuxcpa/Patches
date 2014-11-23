$NetBSD$

--- src/tools/file/xattr.cpp.orig	2014-03-29 10:25:32.000000000 +0000
+++ src/tools/file/xattr.cpp
@@ -27,6 +27,7 @@
 * instead of those above.
 */
 
+#include <sys/xattr.h>
 #include <string.h>
 #include <iostream>
 
