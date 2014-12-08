$NetBSD$

--- src/file_io.c.orig	2011-01-19 10:12:28.000000000 +0000
+++ src/file_io.c
@@ -31,7 +31,7 @@
 **	The header file sfconfig.h MUST be included before the others to ensure
 **	that large file support is enabled correctly on Unix systems.
 */
-
+#include	<stdint.h>
 #include "sfconfig.h"
 
 #include <stdio.h>
