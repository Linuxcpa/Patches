$NetBSD$

--- src/hdaccess.c.orig	2013-05-25 10:53:51.000000000 +0000
+++ src/hdaccess.c
@@ -386,7 +386,7 @@ list_disk_t *hd_parse(list_disk_t *list_
 #elif defined(__HAIKU__)
   {
 #ifdef HAVE_GLOB_H
-    list_disk=hd_glob_parse("/dev/disk/*/*/master/raw", list_disk, verbose, testdisk_mode);
+    list_disk=hd_glob_parse("/dev/disk/*/*/*/*/raw", list_disk, verbose, testdisk_mode);
 #endif
   }
 #else
