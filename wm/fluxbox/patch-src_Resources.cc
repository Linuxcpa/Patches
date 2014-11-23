$NetBSD$

--- src/Resources.cc.orig	2011-10-29 13:46:15.000000000 +0000
+++ src/Resources.cc
@@ -20,7 +20,7 @@
 // DEALINGS IN THE SOFTWARE.
 
 // holds main resource functions
-
+#include <strings.h>
 #include "FbTk/StringUtil.hh"
 #include "FbTk/Resource.hh"
 #include "WinButton.hh"
