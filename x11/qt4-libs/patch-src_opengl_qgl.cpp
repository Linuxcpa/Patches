$NetBSD$

--- src/opengl/qgl.cpp.orig	2014-04-10 18:37:12.046137344 +0000
+++ src/opengl/qgl.cpp
@@ -110,7 +110,7 @@
 
 QT_BEGIN_NAMESPACE
 
-#if defined(Q_WS_X11) || defined(Q_WS_MAC) || defined(Q_WS_QWS) || defined(Q_WS_QPA) || defined(Q_OS_SYMBIAN)
+#if defined(Q_WS_X11) || defined(Q_WS_MAC) || defined(Q_WS_QWS) || defined(Q_WS_QPA) || defined(Q_OS_SYMBIAN) || defined(Q_WS_HAIKU)
 QGLExtensionFuncs QGLContextPrivate::qt_extensionFuncs;
 #endif
 
@@ -2305,7 +2305,7 @@ static void convertToGLFormatHelper(QIma
     }
 }
 
-#if defined(Q_WS_X11) || defined(Q_WS_MAC) || defined(Q_WS_QWS) || defined(Q_WS_QPA) || defined(Q_OS_SYMBIAN)
+#if defined(Q_WS_X11) || defined(Q_WS_MAC) || defined(Q_WS_QWS) || defined(Q_WS_QPA) || defined(Q_OS_SYMBIAN) || defined(Q_WS_HAIKU)
 QGLExtensionFuncs& QGLContextPrivate::extensionFuncs(const QGLContext *)
 {
     return qt_extensionFuncs;
