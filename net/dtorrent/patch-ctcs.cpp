$NetBSD$

--- ctcs.cpp.orig	2008-06-15 00:00:19.000000000 +0000
+++ ctcs.cpp
@@ -1,5 +1,5 @@
 #include "ctcs.h"  // def.h
-
+#include <sys/select.h>
 #include <stdlib.h>
 #include <string.h>
 #include <errno.h>
