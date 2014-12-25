$NetBSD$

--- src/gui/util/util.pri.orig	2014-04-10 18:37:12.036175872 +0000
+++ src/gui/util/util.pri
@@ -59,3 +59,10 @@ symbian {
 
     LIBS += -ldirectorylocalizer
 }
+
+haiku {
+		HEADERS += \
+				util/qsystemtrayicon_haiku.h
+		SOURCES += \
+				util/qsystemtrayicon_haiku.cpp
+    }
