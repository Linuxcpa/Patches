$NetBSD$

--- hw/xfree86/common/xf86.h.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/common/xf86.h
@@ -134,9 +134,9 @@ extern _X_EXPORT Bool xf86ConfigActivePc
 #else
 #define xf86VGAarbiterInit() do {} while (0)
 #define xf86VGAarbiterFini() do {} while (0)
-#define xf86VGAarbiterLock(x) do {} while (0)
-#define xf86VGAarbiterUnlock(x) do {} while (0)
-#define xf86VGAarbiterScrnInit(x) do {} while (0)
+#define xf86VGAarbiterLock() do {} while (0)
+#define xf86VGAarbiterUnlock() do {} while (0)
+#define xf86VGAarbiterScrnInit() do {} while (0)
 #define xf86VGAarbiterDeviceDecodes() do {} while (0)
 #define xf86VGAarbiterWrapFunctions() do {} while (0)
 #endif
