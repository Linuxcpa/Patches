$NetBSD$

--- httpencode.cpp.orig	2008-06-15 00:00:19.000000000 +0000
+++ httpencode.cpp
@@ -1,6 +1,6 @@
 #include "./def.h"
 #include <sys/types.h>
-
+#include <strings.h>
 #include "./httpencode.h"
 
 #include <stdlib.h>
