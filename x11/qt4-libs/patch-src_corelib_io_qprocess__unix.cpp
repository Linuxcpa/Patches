$NetBSD$

--- src/corelib/io/qprocess_unix.cpp.orig	2014-04-10 18:37:11.001835008 +0000
+++ src/corelib/io/qprocess_unix.cpp
@@ -952,8 +952,12 @@ qint64 QProcessPrivate::bytesAvailableFr
 {
     int nbytes = 0;
     qint64 available = 0;
+#ifdef  Q_OS_HAIKU
+	available = 1024;
+#else
     if (::ioctl(stdoutChannel.pipe[0], FIONREAD, (char *) &nbytes) >= 0)
         available = (qint64) nbytes;
+#endif        
 #if defined (QPROCESS_DEBUG)
     qDebug("QProcessPrivate::bytesAvailableFromStdout() == %lld", available);
 #endif
@@ -964,8 +968,12 @@ qint64 QProcessPrivate::bytesAvailableFr
 {
     int nbytes = 0;
     qint64 available = 0;
+#ifdef Q_OS_HAIKU
+	available = 1024;
+#else
     if (::ioctl(stderrChannel.pipe[0], FIONREAD, (char *) &nbytes) >= 0)
         available = (qint64) nbytes;
+#endif
 #if defined (QPROCESS_DEBUG)
     qDebug("QProcessPrivate::bytesAvailableFromStderr() == %lld", available);
 #endif
