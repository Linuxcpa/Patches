$NetBSD$

--- console.cpp.orig	2008-06-15 00:00:19.000000000 +0000
+++ console.cpp
@@ -1,5 +1,5 @@
 #include "console.h"  // def.h
-
+#include <strings.h>
 #include <stdlib.h>     // atoi()
 #include <sys/types.h>  // fstat(), FD_SET(), fork()
 #include <sys/stat.h>   // fstat()
