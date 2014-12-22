$NetBSD$

--- dln.c.orig	2012-12-01 15:25:28.000000000 +0000
+++ dln.c
@@ -942,7 +942,7 @@ load_lib(const char *lib)
     /* look for environment variable DLN_LIBRARY_PATH first. */
     /* then variable dln_librrb_ary_path. */
     /* if path is still NULL, use "." for path. */
-    path = getenv("DLN_LIBRARY_PATH");
+    path = getenv("DLN_XLIBRARY_PATH");
     if (path == NULL) path = dln_librrb_ary_path;
     else path = envpath = strdup(path);
 
