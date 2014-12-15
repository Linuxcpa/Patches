$NetBSD$

--- bin/knc.c.orig	2013-02-14 07:33:37.000000000 +0000
+++ bin/knc.c
@@ -1485,7 +1485,7 @@ do_unix_socket(work_t *work) {
 #if defined(MY_SOLARIS)
 	if (connect(fd, (struct sockaddr *)&pfun, sizeof(pfun)) < 0) {
 #else
-	if (connect(fd, (struct sockaddr *)&pfun, SUN_LEN(&pfun)) < 0) {
+	if (connect(fd, (struct sockaddr *)&pfun, sizeof(&pfun)) < 0) {
 #endif
 		LOG_ERRNO(LOG_ERR, ("failed to connect to %s", pfun.sun_path));
 		return 0;
