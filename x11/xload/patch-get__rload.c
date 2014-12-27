$NetBSD$

--- get_rload.c.orig	2013-08-04 04:43:06.000000000 +0000
+++ get_rload.c
@@ -22,15 +22,13 @@ void GetRLoadPoint(
 {
   *(double *)call_data = 1.0;
 }
-#else  /* RLOADSTUB */
+#endif
+
 
-#include <protocols/rwhod.h>
 #ifndef _PATH_RWHODIR
-#define _PATH_RWHODIR "/var/spool/rwho"
+#define _PATH_RWHODIR "/boot/home/pkg/var/spool/rwho"
 #endif
 
-#define WHDRSIZE        ((int)(sizeof (buf) - sizeof (buf.wd_we)))
-
 void GetRLoadPoint(
     Widget	w,		/* unused */
     XtPointer	closure,	/* unused */
@@ -38,8 +36,8 @@ void GetRLoadPoint(
 {
   int f;
   static char *fname = NULL;
-  static struct whod buf;
   int cc;
+  int buff;
 
   *(double *)call_data = 0.0; /* to be on the safe side */
 
@@ -55,12 +53,6 @@ void GetRLoadPoint(
   if ((f = open(fname, O_RDONLY, 0)) < 0)
     return;
 
-  cc = read(f, &buf, sizeof(buf));
+  cc = read(f, &buff, sizeof(buff));
   close(f);
-  if (cc < WHDRSIZE)
-    return;
-
-  *(double *)call_data = buf.wd_loadav[0] / 100.0;
 }
-
-#endif  /* RLOADSTUB */
