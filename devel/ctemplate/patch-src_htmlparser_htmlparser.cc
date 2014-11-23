$NetBSD$

--- src/htmlparser/htmlparser.cc.orig	2012-04-18 21:49:55.000000000 +0000
+++ src/htmlparser/htmlparser.cc
@@ -34,7 +34,7 @@
 
 /* TODO(falmeida): Breaks on NULL characters in the stream. fix.
  */
-
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
