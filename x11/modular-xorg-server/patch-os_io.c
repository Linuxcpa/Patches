$NetBSD$

--- os/io.c.orig	2012-08-02 00:59:40.000000000 +0000
+++ os/io.c
@@ -74,7 +74,7 @@ SOFTWARE.
 #include <X11/Xproto.h>
 #include "os.h"
 #include "osdep.h"
-#include <X11/Xpoll.h>
+#include "Xmpoll.h"
 #include "opaque.h"
 #include "dixstruct.h"
 #include "misc.h"
@@ -619,8 +619,8 @@ FlushAllOutput(void)
 
 #ifndef WIN32
     for (base = 0; base < howmany(XFD_SETSIZE, NFDBITS); base++) {
-        mask = OutputPending.fds_bits[base];
-        OutputPending.fds_bits[base] = 0;
+        mask = OutputPending.bits[base];
+        OutputPending.bits[base] = 0;
         while (mask) {
             index = ffs(mask) - 1;
             mask &= ~lowbit(mask);
