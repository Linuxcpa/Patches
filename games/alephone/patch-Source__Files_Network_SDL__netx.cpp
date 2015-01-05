$NetBSD$

--- Source_Files/Network/SDL_netx.cpp.orig	2011-08-12 01:33:42.000000000 +0000
+++ Source_Files/Network/SDL_netx.cpp
@@ -22,7 +22,7 @@
  *
  *  Created by Woody Zenfell, III on Mon Sep 24 2001.
  */
-
+# include <sys/sockio.h>
 #ifndef __MWERKS__
 
 #include <sys/types.h>
