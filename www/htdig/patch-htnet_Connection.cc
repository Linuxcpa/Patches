$NetBSD$

--- htnet/Connection.cc.orig	2004-05-28 13:15:22.000000000 +0000
+++ htnet/Connection.cc
@@ -17,7 +17,6 @@
 #ifdef HAVE_CONFIG_H
 #include "htconfig.h"
 #endif /* HAVE_CONFIG_H */
-
 #include "Connection.h"
 #include "Object.h"
 #include "List.h"
@@ -186,21 +185,6 @@ int Connection::Open(int priv)
 
 
 //*****************************************************************************
-// int Connection::Ndelay()
-//
-int Connection::Ndelay()
-{
-#ifndef _MSC_VER /* _WIN32 */
-    return fcntl(sock, F_SETFL, FNDELAY);
-#else
-    // Note:  This function is never called
-    // TODO: Look into ioctsocket(..) of Win32 Socket API
-    return(0);
-#endif
-}
-
-
-//*****************************************************************************
 // int Connection::Nondelay()
 //
 int Connection::Nondelay()
