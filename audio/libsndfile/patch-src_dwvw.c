$NetBSD$

--- src/dwvw.c.orig	2011-01-19 10:12:32.000000000 +0000
+++ src/dwvw.c
@@ -25,7 +25,7 @@
 ** According to the document, the algorithm "was invented 1991 by Magnus
 ** Lidstrom and is copyright 1993 by NuEdge Development".
 */
-
+#include <stdint.h>
 #include	"sfconfig.h"
 
 #include	<stdio.h>
