$NetBSD$

--- unix/plugins/ScratchPlugin/unixSeriaPort2Ops.c.orig	2012-07-30 21:58:07.000000000 +0000
+++ unix/plugins/ScratchPlugin/unixSeriaPort2Ops.c
@@ -296,12 +296,6 @@ int OpenPortNamed(const char *bsdPath, i
 		goto error;
 	}
 
-	// request exclusive access to the port
-	if (ioctl(fDescr, TIOCEXCL) == -1) {
-		printf("Error setting TIOCEXCL on %s - %s(%d).\n", bsdPath, strerror(errno), errno);
-		goto error;
-	}
-
 	// save port settings so we can restore them later
 	if (tcgetattr(fDescr, &gOrigTermios[entryIndex]) == -1) {
 		printf("Error getting attributes %s - %s(%d).\n", bsdPath, strerror(errno), errno);
