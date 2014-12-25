$NetBSD$

--- src/gui/kernel/qapplication.cpp.orig	2014-04-10 18:37:12.022020096 +0000
+++ src/gui/kernel/qapplication.cpp
@@ -4863,7 +4863,7 @@ bool QApplicationPrivate::notify_helper(
   Stubbed session management support
  *****************************************************************************/
 #ifndef QT_NO_SESSIONMANAGER
-#if defined(Q_WS_WIN) || defined(Q_WS_MAC) || defined(Q_WS_QWS)
+#if defined(Q_WS_WIN) || defined(Q_WS_MAC) || defined(Q_WS_QWS) || defined(Q_WS_HAIKU)
 
 #if defined(Q_OS_WINCE)
 HRESULT qt_CoCreateGuid(GUID* guid)
