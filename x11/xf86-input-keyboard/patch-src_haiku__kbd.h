$NetBSD$

--- src/haiku_kbd.h.orig	2014-12-27 01:00:14.793509888 +0000
+++ src/haiku_kbd.h
@@ -0,0 +1,3 @@
+extern void KbdGetMapping(InputInfoPtr pInfo, KeySymsPtr pKeySyms,
+				CARD8 *pModMap);
+
