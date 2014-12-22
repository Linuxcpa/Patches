$NetBSD$

--- os/WaitFor.c.orig	2012-05-17 17:09:04.000000000 +0000
+++ os/WaitFor.c
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
