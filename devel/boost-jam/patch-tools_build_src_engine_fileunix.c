$NetBSD$

--- tools/build/src/engine/fileunix.c.orig	2014-06-19 17:15:38.043515904 +0000
+++ tools/build/src/engine/fileunix.c
@@ -80,7 +80,7 @@ struct ar_hdr  /* archive file member he
 };
 #endif
 
-#if defined( OS_QNX ) || defined( OS_BEOS ) || defined( OS_MPEIX )
+#if defined( OS_QNX ) || defined( OS_BEOS ) || defined( OS_HAIKU ) || defined( OS_MPEIX )
 # define NO_AR
 # define HAVE_AR
 #endif
