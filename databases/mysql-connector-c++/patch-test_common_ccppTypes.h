$NetBSD$

--- test/common/ccppTypes.h.orig	2013-03-25 09:45:20.000000000 +0000
+++ test/common/ccppTypes.h
@@ -26,7 +26,7 @@ with this program; if not, write to the 
 /*
   Some common definitions and inclusions for C/C++ tests.
 */
-
+#include <strings.h>
 #ifndef __C_CPP_TYPES_H_
 #define __C_CPP_TYPES_H_
 
