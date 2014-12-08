$NetBSD$

--- src/mapi/glapi/glapi_dispatch.c.orig	2011-01-06 00:19:15.000000000 +0000
+++ src/mapi/glapi/glapi_dispatch.c
@@ -87,6 +87,5 @@
 /* those link to libglapi.a should provide the entry points */
 #define _GLAPI_SKIP_PROTO_ENTRY_POINTS
 #endif
-#include "glapi/glapitemp.h"
 
 #endif /* USE_X86_ASM */
