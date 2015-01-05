$NetBSD$

--- os/WaitFor.c.orig	2009-08-11 04:00:26.019136512 +0000
+++ os/WaitFor.c
@@ -333,11 +333,11 @@ WaitForSomething(int *pClientsReady)
 	{
 	    int highest_priority = 0;
 
-	    while (clientsReadable.fds_bits[i])
+	    while (clientsReadable.bits[i])
 	    {
 	        int client_priority, client_index;
 
-		curclient = mffs (clientsReadable.fds_bits[i]) - 1;
+		curclient = ffs (clientsReadable.bits[i]) - 1;
 		client_index = /* raphael: modified */
 			ConnectionTranslation[curclient + (i * (sizeof(fd_mask) * 8))];
 #else
@@ -381,7 +381,7 @@ WaitForSomething(int *pClientsReady)
 		    pClientsReady[nready++] = client_index;
 		}
 #ifndef WIN32
-		clientsReadable.fds_bits[i] &= ~(((fd_mask)1L) << curclient);
+		clientsReadable.bits[i] &= ~(((fd_mask)1L) << curclient);
 	    }
 #else
 	    FD_CLR(curclient, &clientsReadable);
