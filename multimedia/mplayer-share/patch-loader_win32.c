$NetBSD$

--- loader/win32.c.orig	2011-11-03 13:24:50.000000000 +0000
+++ loader/win32.c
@@ -15,7 +15,7 @@ for DLL to know too much about its envir
  * Modified for use with MPlayer, detailed changelog at
  * http://svn.mplayerhq.hu/mplayer/trunk/
  */
-
+#include <strings.h>
 #include "config.h"
 #include "mangle.h"
 
