$NetBSD$

--- Source/DialogTemplate.cpp.orig	2014-11-23 00:07:21.784072704 +0000
+++ Source/DialogTemplate.cpp
@@ -19,7 +19,7 @@
 
   3. This notice may not be removed or altered from any source distribution.
 */
-
+#include <strings.h>
 #include "DialogTemplate.h"
 #include <cassert> // for assert(3)
 #ifndef _WIN32
