$NetBSD$

--- Python/bltinmodule.c.orig	2014-05-19 05:19:39.004718592 +0000
+++ Python/bltinmodule.c
@@ -24,7 +24,7 @@
 #ifdef HAVE_MBCS
 const char *Py_FileSystemDefaultEncoding = "mbcs";
 int Py_HasFileSystemDefaultEncoding = 1;
-#elif defined(__APPLE__)
+#elif defined(__APPLE__) || defined(__HAIKU__)
 const char *Py_FileSystemDefaultEncoding = "utf-8";
 int Py_HasFileSystemDefaultEncoding = 1;
 #else
