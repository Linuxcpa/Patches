$NetBSD$

--- get_load.c.orig	2013-08-04 04:43:06.000000000 +0000
+++ get_load.c
@@ -132,12 +132,6 @@ void GetLoadPoint(
 #   define LOADSTUB
 #  endif
 
-#  ifndef LOADSTUB
-#   if !defined(linux) && !defined(__GLIBC__)
-#    include <nlist.h>
-#   endif /* !linux && ... */
-#  endif /* LOADSTUB */
-
 #  ifdef CSRG_BASED
 #   include <sys/param.h>
 #  endif
@@ -592,38 +586,9 @@ void GetLoadPoint(
 #           endif
 #          endif /* KERNEL_LOAD_VARIABLE */
 
-static struct nlist namelist[] = {	    /* namelist for vmunix grubbing */
-#          define LOADAV 0
-    {KERNEL_LOAD_VARIABLE},
-    {0}
-};
-
 static int kmem;
 static long loadavg_seek;
 
-void InitLoadPoint()
-{
-#          if !defined(SVR4) && !defined(sgi) && !defined(AIXV5) && !(BSD >= 199103) && !defined(__APPLE__)
-    extern void nlist();
-#          endif
-
-    nlist( KERNEL_FILE, namelist);
-    /*
-     * Some systems appear to set only one of these to Zero if the entry could
-     * not be found, I hope no_one returns Zero as a good value, or bad things
-     * will happen to you.  (I have a hard time believing the value will
-     * ever really be zero anyway).   CDP 5/17/89.
-     */
-    if (namelist[LOADAV].n_type == 0 ||
-	namelist[LOADAV].n_value == 0) {
-	xload_error("cannot get name list from", KERNEL_FILE);
-	exit(-1);
-    }
-    loadavg_seek = namelist[LOADAV].n_value;
-    kmem = open(KMEM_FILE, O_RDONLY);
-    if (kmem < 0) xload_error("cannot open", KMEM_FILE);
-}
-
 /* ARGSUSED */
 void GetLoadPoint( w, closure, call_data )
      Widget	w;		/* unused */
