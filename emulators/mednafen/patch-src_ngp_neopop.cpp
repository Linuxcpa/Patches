$NetBSD$

--- src/ngp/neopop.cpp.orig	2009-05-15 01:31:25.000000000 +0000
+++ src/ngp/neopop.cpp
@@ -11,7 +11,7 @@
 //	(at your option) any later version. See also the license.txt file for
 //	additional informations.
 //---------------------------------------------------------------------------
-
+#include <strings.h>
 #include "neopop.h"
 #include "../netplay.h"
 #include "../general.h"
