$NetBSD$

--- os/connection.c.orig	2012-08-02 00:59:52.000000000 +0000
+++ os/connection.c
@@ -103,7 +103,7 @@ SOFTWARE.
 #endif                          /* WIN32 */
 #include "misc.h"               /* for typedef of pointer */
 #include "osdep.h"
-#include <X11/Xpoll.h>
+#include "Xmpoll.h"
 #include "opaque.h"
 #include "dixstruct.h"
 #include "xace.h"
@@ -797,7 +797,7 @@ EstablishNewConnections(ClientPtr client
     }
 #ifndef WIN32
     for (i = 0; i < howmany(XFD_SETSIZE, NFDBITS); i++) {
-        while (readyconnections.fds_bits[i])
+        while (readyconnections.bits[i])
 #else
     for (i = 0; i < XFD_SETCOUNT(&readyconnections); i++)
 #endif
@@ -805,13 +805,7 @@ EstablishNewConnections(ClientPtr client
         XtransConnInfo trans_conn, new_trans_conn;
         int status;
 
-#ifndef WIN32
-        curconn = mffs(readyconnections.fds_bits[i]) - 1;
-        readyconnections.fds_bits[i] &= ~((fd_mask) 1 << curconn);
-        curconn += (i * (sizeof(fd_mask) * 8));
-#else
-        curconn = XFD_FD(&readyconnections, i);
-#endif
+        curconn = (&readyconnections, i);
 
         if ((trans_conn = lookup_trans_conn(curconn)) == NULL)
             continue;
@@ -965,9 +959,9 @@ CheckConnections(void)
 
 #ifndef WIN32
     for (i = 0; i < howmany(XFD_SETSIZE, NFDBITS); i++) {
-        mask = AllClients.fds_bits[i];
+        mask = AllClients.bits[i];
         while (mask) {
-            curoff = mffs(mask) - 1;
+            curoff = (mask) - 1;
             curclient = curoff + (i * (sizeof(fd_mask) * 8));
             FD_ZERO(&tmask);
             FD_SET(curclient, &tmask);
@@ -983,7 +977,7 @@ CheckConnections(void)
 #else
     XFD_COPYSET(&AllClients, &savedAllClients);
     for (i = 0; i < XFD_SETCOUNT(&savedAllClients); i++) {
-        curclient = XFD_FD(&savedAllClients, i);
+        curclient = (&savedAllClients, i);
         FD_ZERO(&tmask);
         FD_SET(curclient, &tmask);
         do {
