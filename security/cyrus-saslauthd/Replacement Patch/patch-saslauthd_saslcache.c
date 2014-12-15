$NetBSD: patch-saslauthd_saslcache.c,v 1.1 2011/09/17 11:32:02 obache Exp $

* fixes build with gcc-4.

--- saslauthd/saslcache.c.orig	2012-01-27 23:31:36.009175040 +0000
+++ saslauthd/saslcache.c
@@ -41,7 +41,7 @@
 *****************************************/
 #include <sys/types.h>
 #include <sys/stat.h>
-#include <sys/fcntl.h>
+#include <fcntl.h>
 #include <sys/mman.h>
 #include <errno.h>
 #include <unistd.h>
@@ -137,7 +137,7 @@ int main(int argc, char **argv) {
 	}
 
 	table_stats = shm_base + 64;
-	(char *)table = (char *)table_stats + 128;
+	table = (struct bucket *)((char *)table_stats + 128);
 
 	if (dump_stat_info == 0 && dump_user_info == 0)
 		dump_stat_info = 1;
