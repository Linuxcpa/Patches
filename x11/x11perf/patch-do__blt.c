$NetBSD$

--- do_blt.c.orig	2011-01-07 22:53:16.000000000 +0000
+++ do_blt.c
@@ -20,7 +20,7 @@ ARISING OUT OF OR IN CONNECTION WITH THE
 SOFTWARE.
 
 ******************************************************************************/
-
+#include <sys/mman.h>
 #include "x11perf.h"
 #include <stdio.h>
 
@@ -340,10 +340,8 @@ DoPutImage(XParms xp, Parms p, int reps)
 #include <sys/types.h>
 #ifndef Lynx
 #include <sys/ipc.h>
-#include <sys/shm.h>
 #else
 #include <ipc.h>
-#include <shm.h>
 #endif
 #include <X11/extensions/XShm.h>
 
@@ -386,7 +384,7 @@ InitShmImage(XParms xp, Parms p, int rep
     image_size = image->bytes_per_line * image->height;
     /* allow XYPixmap choice: */
     if(p->font)image_size *= xp->vinfo.depth;
-    shm_info.shmid = shmget(IPC_PRIVATE, image_size, IPC_CREAT|0777);
+    shm_info.shmid = shm_open(IPC_PRIVATE, image_size, IPC_CREAT|0777);
     if (shm_info.shmid < 0)
     {
 	/*
@@ -398,10 +396,10 @@ InitShmImage(XParms xp, Parms p, int rep
 	image = NULL;
 	free(segsa);
 	free(segsb);
-	perror ("shmget");
+	perror ("");
 	return False;
     }
-    shm_info.shmaddr = (char *) shmat(shm_info.shmid, NULL, 0);
+    shm_info.shmaddr = (int *) shm_open(shm_info.shmid, NULL, 0);
     if (shm_info.shmaddr == ((char *) -1))
     {
 	/*
@@ -413,8 +411,8 @@ InitShmImage(XParms xp, Parms p, int rep
 	image = NULL;
 	free(segsa);
 	free(segsb);
-	perror ("shmat");
-	shmctl (shm_info.shmid, IPC_RMID, NULL);
+	perror ("shm_open");
+	msync (shm_info.shmid, IPC_RMID, NULL);
 	return False;
     }
     shm_info.readOnly = read_only;
@@ -434,10 +432,10 @@ InitShmImage(XParms xp, Parms p, int rep
 	image = NULL;
 	free(segsa);
 	free(segsb);
-	if(shmdt (shm_info.shmaddr)==-1)
+	if(shm_unlink (shm_info.shmaddr)==-1)
 	    perror("shmdt:");
-	if(shmctl (shm_info.shmid, IPC_RMID, NULL)==-1)
-	    perror("shmctl rmid:");
+	if(msync (shm_info.shmid, IPC_RMID, NULL)==-1)
+	    perror("msync rmid:");
 	return False;
     }
     shm_image.data = shm_info.shmaddr;
@@ -507,10 +505,10 @@ EndShmImage(XParms xp, Parms p)
     EndGetImage (xp, p);
     XShmDetach (xp->d, &shm_info);
     XSync(xp->d, False);	/* need server to detach so can remove id */
-    if(shmdt (shm_info.shmaddr)==-1)
-	perror("shmdt:");
-    if(shmctl (shm_info.shmid, IPC_RMID, NULL)==-1)
-	perror("shmctl rmid:");
+    if(shm_unlink (shm_info.shmaddr)==-1)
+	perror("shm_unlink:");
+    if(msync (shm_info.shmid, IPC_RMID, NULL)==-1)
+	perror("msync rmid:");
 }
 
 void
