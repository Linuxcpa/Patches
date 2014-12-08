$NetBSD$

--- hw/xfree86/parser/write.c.orig	2012-08-02 00:15:46.000000000 +0000
+++ hw/xfree86/parser/write.c
@@ -50,7 +50,7 @@
  * the sale, use or other dealings in this Software without prior written
  * authorization from the copyright holder(s) and author(s).
  */
-
+#include <errno.h>
 #ifdef HAVE_XORG_CONFIG_H
 #include <xorg-config.h>
 #endif
@@ -158,7 +158,7 @@ xf86writeConfigFile(const char *filename
             return 0;
         case 0:                /* child */
             if (setuid(getuid()) == -1)
-                FatalError("xf86writeConfigFile(): "
+                ErrorF("xf86writeConfigFile(): "
                            "setuid failed(%s)\n", strerror(errno));
             ret = doWriteConfigFile(filename, cptr);
             exit(ret);
