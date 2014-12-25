$NetBSD$

--- src/gui/kernel/qkeymapper_p.h.orig	2014-04-10 18:37:12.009961472 +0000
+++ src/gui/kernel/qkeymapper_p.h
@@ -216,6 +216,10 @@ public:
     int mapS60RemConIdToS60Key(int s60RemConId);
     int mapS60RemConIdToS60ScanCodes(int s60RemConId);
     void updateInputLanguage();
+#elif defined(Q_WS_HAIKU)
+    uint32	translateKeyCode(int32 key);
+    uint32  ScanCodes[256];
+    uint32  ScanCodes_Numlock[16];
 #endif
 };
 
