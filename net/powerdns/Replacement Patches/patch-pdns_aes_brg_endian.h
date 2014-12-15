$NetBSD: patch-pdns_aes_brg_endian.h,v 1.1 2012/05/20 19:37:49 marino Exp $

--- pdns/aes/brg_endian.h.orig	2012-01-05 13:54:50.035651584 +0000
+++ pdns/aes/brg_endian.h
@@ -34,7 +34,8 @@
 /* Include files where endian defines and byteswap functions may reside */
 #if defined( __sun )
 #  include <sys/isa_defs.h>
-#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined( __NetBSD__ )
+#elif defined( __FreeBSD__ ) || defined( __OpenBSD__ ) \
+   || defined( __NetBSD__ ) || defined(__DragonFly__)
 #  include <sys/endian.h>
 #elif defined( BSD ) && ( BSD >= 199103 ) || defined( __APPLE__ ) || \
       defined( __CYGWIN32__ ) || defined( __DJGPP__ ) || defined( __osf__ )
@@ -42,8 +43,8 @@
 #elif defined( __linux__ ) || defined( __GNUC__ ) || defined( __GNU_LIBRARY__ )
 #  if !defined( __MINGW32__ ) && !defined( _AIX )
 #    include <endian.h>
-#    if !defined( __BEOS__ )
-#      include <byteswap.h>
+#    if !defined( __HAIKU__ )
+#      include <endian.h>
 #    endif
 #  endif
 #endif
