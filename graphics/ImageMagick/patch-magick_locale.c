$NetBSD$

--- magick/locale.c.orig	2014-06-26 11:49:06.006029312 +0000
+++ magick/locale.c
@@ -39,24 +39,24 @@
 /*
   Include declarations.
 */
-#include "magick/studio.h"
-#include "magick/blob.h"
-#include "magick/client.h"
-#include "magick/configure.h"
-#include "magick/exception.h"
-#include "magick/exception-private.h"
-#include "magick/hashmap.h"
-#include "magick/locale_.h"
-#include "magick/log.h"
-#include "magick/memory_.h"
-#include "magick/nt-base-private.h"
-#include "magick/semaphore.h"
-#include "magick/splay-tree.h"
-#include "magick/string_.h"
-#include "magick/token.h"
-#include "magick/utility.h"
-#include "magick/xml-tree.h"
-#include "magick/xml-tree-private.h"
+#include "studio.h"
+#include "blob.h"
+#include "client.h"
+#include "configure.h"
+#include "exception.h"
+#include "exception-private.h"
+#include "hashmap.h"
+#include "locale_.h"
+#include "log.h"
+#include "memory_.h"
+#include "nt-base-private.h"
+#include "semaphore.h"
+#include "splay-tree.h"
+#include "string_.h"
+#include "token.h"
+#include "utility.h"
+#include "xml-tree.h"
+#include "xml-tree-private.h"
 
 /*
   Define declarations.
@@ -67,10 +67,8 @@
 /*
   Typedef declarations.
 */
-#if defined(__CYGWIN__)
 typedef struct _locale_t
   *locale_t;
-#endif
 
 /*
   Static declarations.
@@ -130,7 +128,7 @@ static locale_t AcquireCLocale(void)
 {
 #if defined(MAGICKCORE_HAVE_NEWLOCALE)
   if (c_locale == (locale_t) NULL)
-    c_locale=newlocale(LC_ALL_MASK,"C",(locale_t) 0);
+    c_locale=newlocale(LC_ALL,"C",(locale_t) 0);
 #elif defined(MAGICKCORE_WINDOWS_SUPPORT)
   if (c_locale == (locale_t) NULL)
     c_locale=_create_locale(LC_ALL,"C");
