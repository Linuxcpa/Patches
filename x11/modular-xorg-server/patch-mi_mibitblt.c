$NetBSD$

--- mi/mibitblt.c.orig	2012-05-17 17:09:04.000000000 +0000
+++ mi/mibitblt.c
@@ -568,7 +568,7 @@ miCopyPlane(DrawablePtr pSrcDrawable,
         box.x2 -= pSrcDrawable->x;
         box.y1 -= pSrcDrawable->y;
         box.y2 -= pSrcDrawable->y;
-        ptile = miGetPlane(pSrcDrawable, ffs(bitPlane) - 1,
+        ptile = miGetPlane(pSrcDrawable, (bitPlane) - 1,
                            box.x1, box.y1,
                            box.x2 - box.x1, box.y2 - box.y1, (MiBits *) NULL);
         if (ptile) {
@@ -665,7 +665,7 @@ miGetImage(DrawablePtr pDraw, int sx, in
         }
     }
     else {
-        (void) miGetPlane(pDraw, ffs(planeMask) - 1, sx, sy, w, h,
+        (void) miGetPlane(pDraw, (planeMask) - 1, sx, sy, w, h,
                           (MiBits *) pDst);
     }
 }
