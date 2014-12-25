$NetBSD$

--- src/corelib/global/qglobal.h.orig	2014-12-25 04:44:10.341835776 +0000
+++ src/corelib/global/qglobal.h
@@ -177,6 +177,7 @@ namespace QT_NAMESPACE {}
      LYNX     - LynxOS
      BSD4     - Any BSD 4.4 system
      UNIX     - Any UNIX BSD/SYSV system
+     HAIKU    - Haiku system
 */
 
 #if defined(__APPLE__) && (defined(__GNUC__) || defined(__xlC__) || defined(__xlc__))
@@ -263,8 +264,9 @@ namespace QT_NAMESPACE {}
 #  define Q_OS_UNIXWARE
 #elif defined(__INTEGRITY)
 #  define Q_OS_INTEGRITY
-#elif defined(VXWORKS) /* there is no "real" VxWorks define - this has to be set in the mkspec! */
 #  define Q_OS_VXWORKS
+#elif defined(__HAIKU__)
+#  define Q_OS_HAIKU
 #elif defined(__MAKEDEPEND__)
 #else
 #  error "Qt has not been ported to this OS - talk to qt-bugs@trolltech.com"
@@ -882,13 +884,15 @@ namespace QT_NAMESPACE {}
      S60      - Symbian S60
      PM       - unsupported
      WIN16    - unsupported
+     HAIKU	- Haiku, Application Server
 */
 
 #if defined(Q_OS_MSDOS)
 #  define Q_WS_WIN16
 #  error "Qt requires Win32 and does not work with Windows 3.x"
 #elif defined(_WIN32_X11_)
-#  define Q_WS_X11
+#elif defined(Q_OS_HAIKU)
+#  define Q_WS_HAIKU
 #elif defined(Q_OS_WIN32)
 #  define Q_WS_WIN32
 #  if defined(Q_OS_WIN64)
@@ -921,6 +925,10 @@ namespace QT_NAMESPACE {}
 #  endif
 #endif
 
+#if defined(Q_OS_HAIKU) && defined (Q_WS_X11)
+#undef Q_WS_X11
+#endif
+
 #if defined(Q_WS_WIN16) || defined(Q_WS_WIN32) || defined(Q_WS_WINCE)
 #  define Q_WS_WIN
 #endif
