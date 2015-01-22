$NetBSD$

--- src/mesa/main/execmem.c.orig	2010-04-27 21:41:21.055836672 +0000
+++ src/mesa/main/execmem.c
@@ -36,7 +36,7 @@
 
 
 
-#if defined(__linux__) || defined(__OpenBSD__) || defined(_NetBSD__) || defined(__sun)
+#if defined(__linux__) || defined(__OpenBSD__) || defined(_NetBSD__) || defined(__sun) || defined(__HAIKU__)
 
 /*
  * Allocate a large block of memory which can hold code then dole it out
