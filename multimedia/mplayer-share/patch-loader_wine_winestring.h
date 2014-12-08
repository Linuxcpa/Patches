$NetBSD$

--- loader/wine/winestring.h.orig	2014-12-07 22:39:18.000000000 +0000
+++ loader/wine/winestring.h
@@ -1,6 +1,6 @@
 #ifndef MPLAYER_WINESTRING_H
 #define MPLAYER_WINESTRING_H
-
+#include <strings.h>
 #include "windef.h"
 
 LPWSTR      WINAPI lstrcpyAtoW(LPWSTR,LPCSTR);
