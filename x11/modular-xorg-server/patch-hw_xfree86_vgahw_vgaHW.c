$NetBSD$

--- hw/xfree86/vgahw/vgaHW.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/vgahw/vgaHW.c
@@ -1711,7 +1711,7 @@ vgaHWGetHWRec(ScrnInfoPtr scrp)
     hwp->MapSize = 0;
     hwp->pScrn = scrp;
 
-    hwp->dev = xf86GetPciInfoForEntity(scrp->entityList[0]);
+    hwp->dev = (scrp->entityList[0]);
 
     return TRUE;
 }
