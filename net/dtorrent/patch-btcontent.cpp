$NetBSD$

--- btcontent.cpp.orig	2008-06-15 00:00:19.000000000 +0000
+++ btcontent.cpp
@@ -1,5 +1,5 @@
 #include "btcontent.h"
-
+#include <strings.h>
 #ifdef WINDOWS
 #include <direct.h>
 #include <io.h>
