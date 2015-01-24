--- inputserver.c.orig	1996-08-31 01:14:31.000000000 -0700
+++ inputserver.c	2015-01-23 22:23:46.682622976 -0800
@@ -20,8 +20,8 @@
  *  Koji Suzuki   : suz@kt.rim.or.jp
  */
 
-/* $Id: inputserver.c,v 1.3 1996/08/31 08:14:31 suz Exp $ */
 
+#include <sys/select.h>
 #include "pai.h"
 #include "global.h"
 
