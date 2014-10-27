$NetBSD$

--- perl.h.orig	2014-05-26 13:34:20.000000000 +0000
+++ perl.h
@@ -2446,7 +2446,7 @@ typedef SV PADNAME;
 #elif defined(__SYMBIAN32__)
 #   include "symbian/symbianish.h"
 #elif defined(__HAIKU__)
-#   include "haiku/haikuish.h"
+#   include "haikuish.h"
 #else
 #   include "unixish.h"
 #endif
