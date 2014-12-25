$NetBSD$

--- src/corelib/io/qtemporaryfile.cpp.orig	2014-04-10 18:37:11.065798144 +0000
+++ src/corelib/io/qtemporaryfile.cpp
@@ -194,7 +194,14 @@ static bool createFileFromTemplate(Nativ
         }
 #else // POSIX
         file = QT_OPEN(path.constData(),
-                QT_OPEN_CREAT | O_EXCL | QT_OPEN_RDWR | QT_OPEN_LARGEFILE,
+                QT_OPEN_CREAT | O_EXCL | QT_OPEN_RDWR
+
+                #ifndef Q_OS_HAIKU
+
+                 | QT_OPEN_LARGEFILE
+
+                #endif
+				,
                 0600);
 
         if (file != -1)
