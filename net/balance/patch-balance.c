$NetBSD$

--- balance.c.orig	2010-12-03 12:50:22.051118080 +0000
+++ balance.c
@@ -402,14 +402,14 @@ void *shm_malloc(char *file, int size)
     }
 #endif
 
-    if ((shmid = shmget(key, size, 0644 | IPC_CREAT)) == -1) {
-      perror("shmget");
+    if ((shmid = shm_open(key, size, 0644 | IPC_CREAT)) == -1) {
+      perror("shm_open");
       exit(EX_OSERR);
     }
 
-    data = shmat(shmid, (void *) 0, 0);
+    data = shm_unlink (shmid);
     if (data == (char *) (-1)) {
-     perror("shmat");
+     perror("shm_unlink");
       exit(EX_OSERR);
     }
   }
