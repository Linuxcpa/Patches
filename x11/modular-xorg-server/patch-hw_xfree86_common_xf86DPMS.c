$NetBSD$

--- hw/xfree86/common/xf86DPMS.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/common/xf86DPMS.c
@@ -42,9 +42,7 @@
 #include <X11/extensions/dpmsconst.h>
 #include "dpmsproc.h"
 #endif
-#ifdef XSERVER_LIBPCIACCESS
 #include "xf86VGAarbiter.h"
-#endif
 
 #ifdef DPMSExtension
 static DevPrivateKeyRec DPMSKeyRec;
@@ -158,9 +156,9 @@ DPMSSet(ClientPtr client, int level)
         pScrn = xf86Screens[i];
         pDPMS = dixLookupPrivate(&screenInfo.screens[i]->devPrivates, DPMSKey);
         if (pDPMS && pScrn->DPMSSet && pDPMS->Enabled && pScrn->vtSema) {
-            xf86VGAarbiterLock(pScrn);
+            xf86VGAarbiterLock;
             pScrn->DPMSSet(pScrn, level, 0);
-            xf86VGAarbiterUnlock(pScrn);
+            xf86VGAarbiterUnlock;
         }
     }
     return Success;
