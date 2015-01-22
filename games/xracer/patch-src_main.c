$NetBSD$

--- src/main.c.orig	2000-03-19 23:48:47.000000000 +0000
+++ src/main.c
@@ -323,7 +323,6 @@ program_initialization ()
 		PACKAGE, VERSION);
       glutCreateWindow (title);
     }
-  xrWsFixWindowClass ();
 
   glutSetKeyRepeat (GLUT_KEY_REPEAT_OFF);
 
@@ -446,5 +445,4 @@ program_shutdown ()
 
   xrLog (LOG_DEBUG, "Restoring keyboard repeat mode");
   glutSetKeyRepeat (GLUT_KEY_REPEAT_DEFAULT);
-  xrWsFlushEventQueue ();
 }
