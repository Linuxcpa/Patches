$NetBSD$

--- src/plugins/plugins.pro.orig	2014-04-10 18:37:12.058195968 +0000
+++ src/plugins/plugins.pro
@@ -1,7 +1,7 @@
 TEMPLATE = subdirs
 
 SUBDIRS	*= sqldrivers script bearer
-unix:!symbian {
+unix:!symbian:!haiku {
         contains(QT_CONFIG,iconv)|contains(QT_CONFIG,gnu-libiconv)|contains(QT_CONFIG,sun-libiconv):SUBDIRS *= codecs
 } else {
         SUBDIRS *= codecs
