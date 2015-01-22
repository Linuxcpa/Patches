$NetBSD$

--- src/ws_x11.c.orig	2000-01-18 23:24:21.000000000 +0000
+++ src/ws_x11.c
@@ -28,57 +28,3 @@
 #include "xracer-ws.h"
 #include "xracer-log.h"
 
-/* X11- and GLUT-specific hack to warp and grab the pointer into the window. */
-struct GLUTwindow
-{
-  int num;
-  Window win;
-};
-
-extern Display *__glutDisplay;
-
-extern Window __glutRoot;
-extern struct GLUTwindow *__glutCurrentWindow;
-
-void
-xrWsWarpPointer ()
-{
-  Window window = __glutCurrentWindow->win;
-
-  XWarpPointer(__glutDisplay, 0, window, 0, 0, 0, 0, xrWidth/2, xrHeight/2);
-}
-
-/* Grab the pointer. */
-void
-xrWsGrabPointer ()
-{
-  Window window = __glutCurrentWindow->win;
-
-  if (XGrabPointer(__glutDisplay, window, True,
-        ButtonReleaseMask | ButtonPressMask,
-        GrabModeAsync, GrabModeAsync,
-        window, None, CurrentTime) != GrabSuccess)
-    xrLog (LOG_ERROR, "pointer grab failed");
-}
-
-/* Flush out the event queue. */
-void
-xrWsFlushEventQueue ()
-{
-  XSync(__glutDisplay, False);
-}
-
-/* X11 hack to give window a class, so WindowManagers can interact with it
- * (e.g. start xracer without window borders/titlebar, start fullscreen,...)
- * Why isn't this implemented in glutCreateWindow?
- */
-void
-xrWsFixWindowClass ()
-{
-   XClassHint classhint;
-   Window window = __glutCurrentWindow->win;
-
-   classhint.res_name = (char *) "xracer";
-   classhint.res_class = (char *) "XRacer";
-   XSetClassHint (__glutDisplay, window, &classhint);
-}
