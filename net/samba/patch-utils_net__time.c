$NetBSD$

--- utils/net_time.c.orig	2014-04-11 05:02:09.552337408 +0000
+++ utils/net_time.c
@@ -105,6 +105,14 @@ int net_time_usage(struct net_context *c
 	return -1;
 }
 
+#ifdef __HAIKU__
+int settimeofday(struct timeval *tv, struct timezone *tz)
+{
+	set_real_time_clock(tv->tv_sec);
+	return(0);
+}
+#endif //__HAIKU__
+
 /* try to set the system clock */
 static int net_time_set(struct net_context *c, int argc, const char **argv)
 {
