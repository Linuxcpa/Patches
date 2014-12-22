$NetBSD$

--- hw/xfree86/common/xf86Init.c.orig	2012-08-02 00:29:29.000000000 +0000
+++ hw/xfree86/common/xf86Init.c
@@ -78,9 +78,7 @@
 #include "picturestr.h"
 
 #include "xf86Bus.h"
-#ifdef XSERVER_LIBPCIACCESS
 #include "xf86VGAarbiter.h"
-#endif
 #include "globals.h"
 #include "xserver-properties.h"
 
@@ -580,12 +578,12 @@ InitOutput(ScreenInfo * pScreenInfo, int
          */
 
         for (i = 0; i < xf86NumScreens; i++) {
-            xf86VGAarbiterScrnInit(xf86Screens[i]);
-            xf86VGAarbiterLock(xf86Screens[i]);
+            xf86VGAarbiterScrnInit;
+            xf86VGAarbiterLock;
             if (xf86Screens[i]->PreInit &&
                 xf86Screens[i]->PreInit(xf86Screens[i], 0))
                 xf86Screens[i]->configured = TRUE;
-            xf86VGAarbiterUnlock(xf86Screens[i]);
+            xf86VGAarbiterUnlock;
         }
         for (i = 0; i < xf86NumScreens; i++)
             if (!xf86Screens[i]->configured)
@@ -817,7 +815,7 @@ InitOutput(ScreenInfo * pScreenInfo, int
         FatalError("Cannot register DDX private keys");
 
     for (i = 0; i < xf86NumScreens; i++) {
-        xf86VGAarbiterLock(xf86Screens[i]);
+        xf86VGAarbiterLock;
         /*
          * Almost everything uses these defaults, and many of those that
          * don't, will wrap them.
@@ -832,7 +830,7 @@ InitOutput(ScreenInfo * pScreenInfo, int
         xf86Screens[i]->DriverFunc = NULL;
         xf86Screens[i]->pScreen = NULL;
         scr_index = AddScreen(xf86Screens[i]->ScreenInit, argc, argv);
-        xf86VGAarbiterUnlock(xf86Screens[i]);
+        xf86VGAarbiterUnlock;
         if (scr_index == i) {
             /*
              * Hook in our ScrnInfoRec, and initialise some other pScreen
@@ -1038,9 +1036,9 @@ AbortDDX(enum ExitCode error)
                  * we might not have been wrapped yet. Therefore enable
                  * screen explicitely.
                  */
-                xf86VGAarbiterLock(xf86Screens[i]);
+                xf86VGAarbiterLock;
                 (xf86Screens[i]->LeaveVT) (i, 0);
-                xf86VGAarbiterUnlock(xf86Screens[i]);
+                xf86VGAarbiterUnlock;
             }
     }
 
