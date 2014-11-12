$NetBSD$

--- src/libmowgli/mowgli_global_storage.c.orig	2010-07-14 03:43:15.000000000 +0000
+++ src/libmowgli/mowgli_global_storage.c
@@ -21,6 +21,7 @@
  * POSSIBILITY OF SUCH DAMAGE.
  */
 
+#include <strings.h>
 #include "mowgli.h"
 
 static mowgli_dictionary_t *mowgli_global_storage_dict = NULL;
