$NetBSD$

--- tombupnp/threadutil/src/ThreadPool.c.orig	2014-07-18 06:06:37.000000000 +0000
+++ tombupnp/threadutil/src/ThreadPool.c
@@ -372,7 +372,7 @@ tp->stats.totalJobsLQ++; tp->stats.total
     gettimeofday( &t, NULL );
 #if defined(WIN32)
     srand( ( unsigned int )(t.tv_usec/1000) + (unsigned int)ithread_get_current_thread_id(  ).p );
-#elif defined(__FreeBSD__) || defined (__APPLE__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
+#elif defined(__FreeBSD__) || defined (__APPLE__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)  || defined(__HAIKU__)
     srand( ( unsigned int )(t.tv_usec/1000) + (unsigned int)ithread_get_current_thread_id(  ) );
 #else
     srand( ( unsigned int )(t.tv_usec/1000) + ithread_get_current_thread_id(  ) );
