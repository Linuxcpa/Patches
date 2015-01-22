$NetBSD$

--- src/mode.c.orig	2000-03-12 12:58:54.000000000 +0000
+++ src/mode.c
@@ -115,15 +115,6 @@ display ()
   glutSwapBuffers ();
   frame ++;
 
-  /* We can't warp and grab the pointer until the window is mapped. Wait
-   * a few frames before doing this.
-   */
-  if (frame == 4)
-    {
-      xrWsWarpPointer ();
-      xrWsGrabPointer ();
-    }
-
   /* Take a screenshot, if requested. */
   if (take_screenshot)
     {
