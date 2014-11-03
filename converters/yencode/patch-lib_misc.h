$NetBSD$

--- lib/misc.h.orig	2002-03-19 06:14:22.000000000 +0000
+++ lib/misc.h
@@ -18,6 +18,7 @@
 #ifndef MISC_H
 #define MISC_H
 
+#include <stdint.h>
 #include <config.h>
 
 /* <unistd.h> should be included before any preprocessor test
