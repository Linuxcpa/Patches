$NetBSD$

--- xsec/framework/XSECDefs.hpp.orig	2013-06-17 22:32:41.000000000 +0000
+++ xsec/framework/XSECDefs.hpp
@@ -172,8 +172,6 @@
 #ifdef XSEC_LIBRARY_BUILD
 #   ifdef XSEC_HAVE_STRCASECMP
 #       define _stricmp(x,y) strcasecmp(x,y)
-#   else
-#       define _stricmp(x,y) stricmp(x,y)
 #   endif
 #endif
 
