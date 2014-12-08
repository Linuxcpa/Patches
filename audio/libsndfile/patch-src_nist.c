$NetBSD$

--- src/nist.c.orig	2011-01-19 10:11:08.000000000 +0000
+++ src/nist.c
@@ -22,7 +22,7 @@
 **		ftp://ccrma-ftp.stanford.edu/pub/Lisp/sndlib.tar.gz
 **	However, no code from that package was used.
 */
-
+#include	<stdint.h>
 #include	"sfconfig.h"
 
 #include	<stdio.h>
