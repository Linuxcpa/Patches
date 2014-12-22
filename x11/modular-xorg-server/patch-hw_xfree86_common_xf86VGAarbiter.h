$NetBSD$

--- hw/xfree86/common/xf86VGAarbiter.h.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/common/xf86VGAarbiter.h
@@ -31,16 +31,16 @@
 #include "xf86.h"
 
 /* Functions */
-extern void xf86VGAarbiterInit(void);
-extern void xf86VGAarbiterFini(void);
-void xf86VGAarbiterScrnInit(ScrnInfoPtr pScrn);
-extern Bool xf86VGAarbiterWrapFunctions(void);
-extern void xf86VGAarbiterLock(ScrnInfoPtr pScrn);
-extern void xf86VGAarbiterUnlock(ScrnInfoPtr pScrn);
+extern void xf86VGAarbiterInit;
+extern void xf86VGAarbiterFini;
+extern void xf86VGAarbiterScrnInit;
+extern Bool xf86VGAarbiterWrapFunctions;
+extern void xf86VGAarbiterLock;
+extern void xf86VGAarbiterUnlock;
 
 /* allow a driver to remove itself from arbiter - really should be
  * done in the kernel though */
-extern _X_EXPORT void xf86VGAarbiterDeviceDecodes(ScrnInfoPtr pScrn, int rsrc);
+extern _X_EXPORT void xf86VGAarbiterDeviceDecodes;
 
 /* DRI and arbiter are really not possible together,
  * you really want to remove the card from arbitration if you can */
