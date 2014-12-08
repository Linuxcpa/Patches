$NetBSD$

--- src/fformat_.cpp.orig	2002-02-19 19:50:02.000000000 +0000
+++ src/fformat_.cpp
@@ -1,7 +1,7 @@
 //
 // /home/ms/source/sidplay/libsidplay/fformat/RCS/fformat_.cpp,v
 //
-
+#include <strings.h>
 #include "compconf.h"
 #ifdef SID_HAVE_EXCEPTIONS
 #include <new>
