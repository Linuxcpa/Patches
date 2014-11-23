$NetBSD: patch-source_iflist.c,v 1.2 2013/07/21 11:29:55 shattered Exp $

--- iflist.c.orig	2010-01-09 09:26:08.043515904 +0000
+++ iflist.c
@@ -18,7 +18,7 @@
  * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
  *
  */
-
+#include <sys/sockio.h>
 #ifdef HAVE_CONFIG_H
 #include "config.h"
 #endif
@@ -38,6 +38,10 @@
 # include <assert.h>
 #endif
 
+#ifdef __sun
+#include <sys/sockio.h>
+#endif
+
 #include "irc.h"
 #include "ircaux.h"
 #include "iflist.h"
