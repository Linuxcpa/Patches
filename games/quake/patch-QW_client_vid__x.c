$NetBSD$

--- QW/client/vid_x.c.orig	1999-12-21 18:46:08.000000000 +0000
+++ QW/client/vid_x.c
@@ -32,12 +32,12 @@ typedef unsigned short PIXEL;
 #include <stdio.h>
 #include <string.h>
 #include <sys/ipc.h>
-#include <sys/shm.h>
 #include <X11/Xlib.h>
 #include <X11/Xutil.h>
 #include <X11/Xatom.h>
 #include <X11/keysym.h>
 #include <X11/extensions/XShm.h>
+#include <sys/mman.h>
 
 #include "quakedef.h"
 #include "d_local.h"
@@ -310,7 +310,7 @@ void ResetSharedFrameBuffers(void)
 		{
 			XShmDetach(x_disp, &x_shminfo[frm]);
 			free(x_framebuffer[frm]);
-			shmdt(x_shminfo[frm].shmaddr);
+			shm_unlink(x_shminfo[frm].shmaddr);
 		}
 
 	// create the image
@@ -332,13 +332,13 @@ void ResetSharedFrameBuffers(void)
 			Sys_Error("VID: Window must use at least %d bytes\n", minsize);
 
 		key = random();
-		x_shminfo[frm].shmid = shmget((key_t)key, size, IPC_CREAT|0777);
+		x_shminfo[frm].shmid = shm_open((key_t)key, size, IPC_CREAT|0777);
 		if (x_shminfo[frm].shmid==-1)
 			Sys_Error("VID: Could not get any shared memory\n");
 
 		// attach to the shared memory segment
 		x_shminfo[frm].shmaddr =
-			(void *) shmat(x_shminfo[frm].shmid, 0, 0);
+			(void *) shm_open(x_shminfo[frm].shmid, 0, 0);
 
 		printf("VID: shared memory id=%d, addr=0x%lx\n", x_shminfo[frm].shmid,
 			(long) x_shminfo[frm].shmaddr);
@@ -350,7 +350,7 @@ void ResetSharedFrameBuffers(void)
 		if (!XShmAttach(x_disp, &x_shminfo[frm]))
 			Sys_Error("VID: XShmAttach() failed\n");
 		XSync(x_disp, 0);
-		shmctl(x_shminfo[frm].shmid, IPC_RMID, 0);
+		msync(x_shminfo[frm].shmid, IPC_RMID, 0);
 
 	}
 
