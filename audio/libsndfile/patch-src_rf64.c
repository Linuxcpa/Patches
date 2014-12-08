$NetBSD$

--- src/rf64.c.orig	2011-01-19 10:10:44.000000000 +0000
+++ src/rf64.c
@@ -24,7 +24,7 @@
 **	But this may be a better reference:
 **	http://www.ebu.ch/CMSimages/en/tec_doc_t3306-2007_tcm6-42570.pdf
 */
-
+#include	<stdint.h>
 #include	"sfconfig.h"
 
 #include	<stdio.h>
