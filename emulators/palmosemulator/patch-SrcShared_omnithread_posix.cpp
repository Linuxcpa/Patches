$NetBSD$

--- SrcShared/omnithread/posix.cpp.orig	2002-03-29 13:11:07.000000000 +0000
+++ SrcShared/omnithread/posix.cpp
@@ -43,11 +43,11 @@
 // Not all platforms support this standard. The macro 'NoNanoSleep'
 // identifies platform that don't.
 //
-
+#include <stdint.h>
 #include <stdlib.h>
 #include <errno.h>
 #include <time.h>
-#include <omnithread.h>
+#include "omnithread.h"
 
 #if (defined(__GLIBC__) && __GLIBC__ >= 2)
 // typedef of struct timeval and gettimeofday();
@@ -817,21 +817,12 @@ omni_thread::sleep(unsigned long secs, u
 
     if (pthread_delay_np(&rqts) != 0)
 	throw omni_thread_fatal(errno);
-
-#elif defined(__linux__) || defined(__aix__) || defined(__svr4__) || defined(__bsdi__)
+#endif
 
     if (secs > 2000) {
-	::sleep(secs);
-    } else {
-	usleep(secs * 1000000 + (nanosecs / 1000));
-    }
+	sleep(secs);
+    } 
 
-#else
-
-#error You need to define how to emulate nanosleep!
-    throw omni_thread_invalid();
-
-#endif
 #endif	/* NoNanoSleep */
 }
 
