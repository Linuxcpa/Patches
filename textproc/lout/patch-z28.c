$NetBSD$

--- z28.c.orig	2010-09-09 20:54:40.000000000 +0000
+++ z28.c
@@ -27,6 +27,7 @@
 /*  EXTERNS:      ErrorInit(), Error(), ErrorSeen()                          */
 /*                                                                           */
 /*****************************************************************************/
+#include <nl_types.h>
 #include "externs.h"
 
 #define	MAX_BLOCKS	 20		/* max number of error blocks        */
