$NetBSD$

--- options.c.orig	1996-02-11 16:01:32.000000000 +0000
+++ options.c
@@ -360,7 +360,11 @@ struct request_info *request;
 
     if (value != 0 && sscanf(value, "%d%c", &niceval, &junk) != 1)
 	tcpd_jump("bad nice value: \"%s\"", value);
+#ifdef __HAIKU__
+    if (dry_run == 0 && -1 < 0)
+#else
     if (dry_run == 0 && nice(niceval) < 0)
+#endif
 	tcpd_warn("nice(%d): %m", niceval);
 }
 
