$NetBSD$

--- dds.c.orig	2000-02-10 23:52:22.046399488 +0000
+++ dds.c
@@ -11,7 +11,7 @@
  * George Weaver <gmw@psu.edu>
  * David Brumley <dbrumley@rtfm.stanford.edu>
  */
-
+#include <strings.h>
 #if YOU_HAVE_NOT_READ_THIS_YET
 
 This software should only be used in compliance with all applicable laws and
