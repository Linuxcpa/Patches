$NetBSD$

--- tremor/info.c.orig	2009-05-13 15:22:13.000000000 +0000
+++ tremor/info.c
@@ -17,7 +17,7 @@
 
 /* general handling of the header and the vorbis_info structure (and
    substructures) */
-
+#include <strings.h>
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>
