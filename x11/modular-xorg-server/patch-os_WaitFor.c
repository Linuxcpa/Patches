$NetBSD$

--- os/WaitFor.c.orig	2012-05-17 17:09:04.000000000 +0000
+++ os/WaitFor.c
@@ -51,7 +51,7 @@ SOFTWARE.
  *  TimerForce, TimerSet, TimerCheck, TimerFree
  *
  *****************************************************************/
-
+#include <sys/select.h>
 #ifdef HAVE_DIX_CONFIG_H
 #include <dix-config.h>
 #endif
@@ -64,9 +64,9 @@ SOFTWARE.
 #include <stdio.h>
 #include <X11/X.h>
 #include "misc.h"
-
+#include "Xmpoll.h"
 #include "osdep.h"
-#include <X11/Xpoll.h>
+
 #include "dixstruct.h"
 #include "opaque.h"
 #ifdef DPMSExtension
@@ -314,10 +314,10 @@ WaitForSomething(int *pClientsReady)
         for (i = 0; i < howmany(XFD_SETSIZE, NFDBITS); i++) {
             int highest_priority = 0;
 
-            while (clientsReadable.fds_bits[i]) {
+            while (clientsReadable.bits[i]) {
                 int client_priority, client_index;
 
-                curclient = mffs(clientsReadable.fds_bits[i]) - 1;
+                curclient = mffs(clientsReadable.bits[i]) - 1;
                 client_index =  /* raphael: modified */
                     ConnectionTranslation[curclient +
                                           (i * (sizeof(fd_mask) * 8))];
@@ -360,7 +360,7 @@ WaitForSomething(int *pClientsReady)
                 pClientsReady[nready++] = client_index;
             }
 #ifndef WIN32
-            clientsReadable.fds_bits[i] &= ~(((fd_mask) 1L) << curclient);
+            clientsReadable.bits[i] &= ~(((fd_mask) 1L) << curclient);
         }
 #else
             FD_CLR(curclient, &clientsReadable);
