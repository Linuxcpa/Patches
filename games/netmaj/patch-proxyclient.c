--- proxyclient.c.orig	1996-08-31 01:14:36.000000000 -0700
+++ proxyclient.c	2015-01-23 22:23:26.676593664 -0800
@@ -20,8 +20,7 @@
  *  Koji Suzuki   : suz@kt.rim.or.jp
  */
 
-#ident "$Id: proxyclient.c,v 1.10 1996/08/31 08:14:36 suz Exp $"
-
+#include <sys/select.h>
 #include "pai.h"
 #include "global.h"
 
