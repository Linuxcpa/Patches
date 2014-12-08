$NetBSD$

--- nouveau/nouveau.c.orig	2014-05-30 16:38:28.000000000 +0000
+++ nouveau/nouveau.c
@@ -201,7 +201,7 @@ nouveau_client_new(struct nouveau_device
 	pthread_mutex_lock(&nvdev->lock);
 
 	for (i = 0; i < nvdev->nr_client; i++) {
-		id = ffs(nvdev->client[i]) - 1;
+		id = (nvdev->client[i]) - 1;
 		if (id >= 0)
 			goto out;
 	}
