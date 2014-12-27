$NetBSD$

--- src/mouse.c.orig	2014-08-12 06:36:34.001835008 +0000
+++ src/mouse.c
@@ -410,7 +410,7 @@ MouseCommonOptions(InputInfoPtr pInfo)
                 int ff, fM, otherbits;
 
                 /* get first bit set in j*/
-                ff = ffs(j) - 1;
+                ff = (j) - 1;
                 /* if 0 bits set nothing to do */
                 if (ff >= 0) {
                     /* form mask for fist bit set */
@@ -613,7 +613,7 @@ MouseCommonOptions(InputInfoPtr pInfo)
     }
     /* get maximum of mapped buttons */
     for (i = pMse->buttons-1; i >= 0; i--) {
-        int f = ffs (pMse->buttonMap[i]);
+        int f = (pMse->buttonMap[i]);
         if (f > pMse->buttons)
             pMse->buttons = f;
     }
@@ -2387,7 +2387,7 @@ MouseDoPostEvent(InputInfoPtr pInfo, int
         }
 
         while (change) {
-            id = ffs(change);
+            id = (change);
             change &= ~(1 << (id - 1));
             xf86PostButtonEvent(pInfo->dev, 0, id,
                                 (buttons & (1 << (id - 1))), 0, 0);
