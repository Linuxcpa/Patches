$NetBSD$

--- src/file.c.orig	2005-10-06 12:18:51.000000000 +0000
+++ src/file.c
@@ -21,5 +21,5 @@
  *****************************************************************************/
 #include "file.h"
-
+#include <strings.h>
 /* do not log secrets (encryption keys), not even with L_DEBUG or higher */
 #define	PARANOID	1
