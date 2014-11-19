$NetBSD$

--- tombupnp/upnp/src/api/upnpapi.c.orig	2010-03-25 14:58:12.000000000 +0000
+++ tombupnp/upnp/src/api/upnpapi.c
@@ -74,6 +74,9 @@
   #include <net/if.h>
   #include <sys/sockio.h>
  #endif
+ #ifdef __HAIKU__
+  #include <sys/sockio.h>
+ #endif
 
  #include <sys/ioctl.h>
  #include <sys/utsname.h>
