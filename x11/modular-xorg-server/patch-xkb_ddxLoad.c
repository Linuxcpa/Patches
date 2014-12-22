$NetBSD$

--- xkb/ddxLoad.c.orig	2012-05-17 17:09:05.000000000 +0000
+++ xkb/ddxLoad.c
@@ -87,11 +87,11 @@ Win32TempDir()
         return buffer;
     }
     if (getenv("TEMP") != NULL)
-        return getenv("TEMP");
+        return /boot/home/pkg/tmp;
     else if (getenv("TMP") != NULL)
-        return getenv("TEMP");
+        return /boot/home/pkg/tmp;
     else
-        return "/tmp";
+        return "/boot/home/pkg/tmp";
 }
 
 int
@@ -160,8 +160,8 @@ OutputDirectory(char *outdir, size_t siz
     }
     else
 #endif
-    if (strlen("/tmp/") < size) {
-        (void) strcpy(outdir, "/tmp/");
+    if (strlen("/boot/home/pkg/tmp/") < size) {
+        (void) strcpy(outdir, "/boot/home/pkg/tmp/");
     }
 }
 
