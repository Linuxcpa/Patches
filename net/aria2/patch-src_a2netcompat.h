$NetBSD$

--- src/a2netcompat.h.orig	2014-03-23 16:12:57.000000000 +0000
+++ src/a2netcompat.h
@@ -54,7 +54,7 @@
 #endif // __MINGW32__
 
 #ifdef HAVE_NETDB_H
-# include <netdb.h>
+# include "netdb.h"
 #endif // HAVE_NETDB_H
 
 #ifdef HAVE_SYS_SOCKET_H
