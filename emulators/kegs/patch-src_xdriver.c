$NetBSD$

--- src/xdriver.c.orig	2004-12-07 00:42:47.057671680 +0000
+++ src/xdriver.c
@@ -24,7 +24,6 @@ const char rcsid_xdriver_c[] = "@(#)$KmK
 
 #ifdef X_SHARED_MEM
 # include <sys/ipc.h>
-# include <sys/shm.h>
 # include <X11/extensions/XShm.h>
 #endif
 
@@ -807,7 +806,7 @@ get_shm(Kimage *kimage_ptr)
 	}
 
 	/* It worked, we got it */
-	seginfo->shmid = shmget(IPC_PRIVATE, xim->bytes_per_line * xim->height,
+	seginfo->shmid = shm_open(IPC_PRIVATE, xim->bytes_per_line * xim->height,
 		IPC_CREAT | 0777);
 	vid_printf("seginfo->shmid = %d\n", seginfo->shmid);
 	if(seginfo->shmid < 0) {
@@ -816,7 +815,7 @@ get_shm(Kimage *kimage_ptr)
 	}
 
 	/* Still working */
-	seginfo->shmaddr = (char *)shmat(seginfo->shmid, 0, 0);
+	seginfo->shmaddr = (char *)shm_open(seginfo->shmid, 0, 0);
 	vid_printf("seginfo->shmaddr: %p\n", seginfo->shmaddr);
 	if(seginfo->shmaddr == ((char *) -1)) {
 		XDestroyImage(xim);
@@ -836,7 +835,7 @@ get_shm(Kimage *kimage_ptr)
 
 
 	vid_printf("about to RMID the shmid\n");
-	shmctl(seginfo->shmid, IPC_RMID, 0);
+	msync(seginfo->shmid, IPC_RMID, 0);
 
 	XFlush(g_display);
 	XSetErrorHandler(old_x_handler);
