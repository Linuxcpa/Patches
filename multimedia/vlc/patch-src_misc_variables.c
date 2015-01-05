$NetBSD$

--- src/misc/variables.c.orig	2010-08-08 17:47:50.000000000 +0000
+++ src/misc/variables.c
@@ -27,7 +27,7 @@
 #ifdef HAVE_CONFIG_H
 # include "config.h"
 #endif
-
+#include <strings.h>
 #include <vlc_common.h>
 #include <vlc_charset.h>
 #include "variables.h"
@@ -396,7 +396,6 @@ void var_DestroyAll( vlc_object_t *obj )
 {
     vlc_object_internals_t *priv = vlc_internals( obj );
 
-    tdestroy( priv->var_root, CleanupVar );
 }
 
 #undef var_Change
