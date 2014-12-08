$NetBSD$

--- src/sd2.c.orig	2011-01-19 10:10:36.000000000 +0000
+++ src/sd2.c
@@ -26,7 +26,7 @@
 ** Documentation on the Mac resource fork was obtained here :
 ** http://developer.apple.com/documentation/mac/MoreToolbox/MoreToolbox-99.html
 */
-
+#include	<stdint.h>
 #include	"sfconfig.h"
 
 #include	<stdio.h>
