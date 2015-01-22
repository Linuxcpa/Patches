$NetBSD$

--- src/peer.c.orig	2005-07-28 18:37:17.000000000 +0000
+++ src/peer.c
@@ -21,5 +21,5 @@
  *****************************************************************************/
 #include "peer.h"
-
+#include <strings.h>
 /**
  * @brief Post ADV messages only to queues with fewer entries than this value
