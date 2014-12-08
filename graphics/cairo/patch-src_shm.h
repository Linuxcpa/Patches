$NetBSD$

--- src/shm.h.orig	2014-11-17 02:26:43.238813184 +0000
+++ src/shm.h
@@ -0,0 +1,43 @@
+/*
+ * Copyright 2011 Haiku Inc. All Rights Reserved.
+ * Distributed under the terms of the MIT License.
+ */
+#ifndef _SYS_SHM_H
+#define _SYS_SHM_H
+
+
+#include <sys/ipc.h>
+#include <sys/types.h>
+
+
+/* Message Flags */
+#define SHM_RDONLY	01000	/* attach read-only (else read-write) */
+#define SHM_RND		02000	/* rounds attach address to SHMLBA */
+
+#define SHMLBA		1024
+
+
+typedef unsigned long shmatt_t;
+
+struct shmid_ds {
+	struct ipc_perm	shm_perm;
+	size_t		shm_segsz;
+	pid_t		shm_lpid;
+	pid_t		shm_cpid;
+	shmatt_t	shm_nattch;
+	time_t		shm_atime;
+	time_t		shm_dtime;
+	time_t		shm_ctime;
+};
+
+
+__BEGIN_DECLS
+
+int shmctl(int id, int command, struct shmid_ds* buffer);
+int	shmget(key_t key, size_t size, int flags);
+void* shmat(int id, const void* address, int flags);
+int	shmdt(const void* address);
+
+__END_DECLS
+
+#endif	/* _SYS_SHM_H */
