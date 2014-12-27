$NetBSD$

--- sessreg.c.orig	2013-02-11 02:43:50.000000000 +0000
+++ sessreg.c
@@ -342,7 +342,8 @@ main (int argc, char **argv)
 			updwtmpx(wtmpx_file, &utmpx_entry);
 		}
 # endif
-#else
+#endif
+#ifdef defined(USE_UTMP) 
 		wtmp = open (wtmp_file, O_WRONLY|O_APPEND);
 		if (wtmp != -1) {
 			sysnerr (write (wtmp, (char *) &utmp_entry, sizeof (utmp_entry))
