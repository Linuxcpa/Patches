$NetBSD$

--- src/3rdparty/webkit/Source/WebCore/features.pri.orig	2014-04-10 18:37:11.012058624 +0000
+++ src/3rdparty/webkit/Source/WebCore/features.pri
@@ -98,7 +98,7 @@ contains(DEFINES, ENABLE_SINGLE_THREADED
 
 # Nescape plugins support (NPAPI)
 !contains(DEFINES, ENABLE_NETSCAPE_PLUGIN_API=.) {
-    unix|win32-*:!embedded:!wince*: {
+    unix|win32-*:!embedded:!wince*:!haiku: {
         DEFINES += ENABLE_NETSCAPE_PLUGIN_API=1
     } else {
         DEFINES += ENABLE_NETSCAPE_PLUGIN_API=0
