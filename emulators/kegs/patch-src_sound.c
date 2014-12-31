$NetBSD$

--- src/sound.c.orig	2004-12-07 00:42:47.055574528 +0000
+++ src/sound.c
@@ -12,9 +12,8 @@ const char rcsid_sound_c[] = "@(#)$KmKId
 
 #include "defc.h"
 
-#define INCLUDE_RCSID_C
 #include "sound.h"
-#undef INCLUDE_RCSID_C
+#include <sys/mman.h>
 
 #if 0
 # define DO_DOC_LOG
@@ -265,24 +264,24 @@ sound_init_general()
 	size = SOUND_SHM_SAMP_SIZE * SAMPLE_CHAN_SIZE;
 
 #if !defined(_WIN32) && !defined(__CYGWIN__) && !defined(MAC)
-	shmid = shmget(IPC_PRIVATE, size, IPC_CREAT | 0777);
+	shmid = shm_open(IPC_PRIVATE, size, IPC_CREAT | 0777);
 	if(shmid < 0) {
-		printf("sound_init: shmget ret: %d, errno: %d\n", shmid,
+		printf("sound_init: shm_open ret: %d, errno: %d\n", shmid,
 			errno);
 		exit(2);
 	}
 
-	shmaddr = shmat(shmid, 0, 0);
+	shmaddr = shm_open(shmid, 0, 0);
 	tmp = (int)PTR2WORD(shmaddr);
 	if(tmp == -1) {
-		printf("sound_init: shmat ret: %p, errno: %d\n", shmaddr,
+		printf("sound_init: shm_open ret: %p, errno: %d\n", shmaddr,
 			errno);
 		exit(3);
 	}
 
-	ret = shmctl(shmid, IPC_RMID, 0);
+	ret = msync(shmid, IPC_RMID, 0);
 	if(ret < 0) {
-		printf("sound_init: shmctl ret: %d, errno: %d\n", ret, errno);
+		printf("sound_init: msync ret: %d, errno: %d\n", ret, errno);
 		exit(4);
 	}
 #else
