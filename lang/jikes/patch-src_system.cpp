$NetBSD$

--- src/system.cpp.orig	2004-06-20 21:24:19.000000000 +0000
+++ src/system.cpp
@@ -7,6 +7,7 @@
 // You must accept the terms of that agreement to use this software.
 //
 
+#include <strings.h>
 #include "platform.h"
 #include "control.h"
 #include "semantic.h"
