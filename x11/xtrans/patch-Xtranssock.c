$NetBSD$

--- Xtranssock.c.orig	2014-03-31 09:45:04.018087936 +0000
+++ Xtranssock.c
@@ -208,28 +208,28 @@ static int TRANS(SocketINETClose) (Xtran
 
 
 #if defined(X11_t)
-#define UNIX_PATH "/tmp/.X11-unix/X"
-#define UNIX_DIR "/tmp/.X11-unix"
+#define UNIX_PATH "/boot/home/pkg/tmp/.X11-unix/X"
+#define UNIX_DIR "/boot/home/pkg/tmp/.X11-unix"
 #endif /* X11_t */
 #if defined(XIM_t)
-#define UNIX_PATH "/tmp/.XIM-unix/XIM"
-#define UNIX_DIR "/tmp/.XIM-unix"
+#define UNIX_PATH "/boot/home/pkg/tmp/.XIM-unix/XIM"
+#define UNIX_DIR "/boot/home/pkg/tmp/.XIM-unix"
 #endif /* XIM_t */
 #if defined(FS_t) || defined(FONT_t)
-#define UNIX_PATH "/tmp/.font-unix/fs"
-#define UNIX_DIR "/tmp/.font-unix"
+#define UNIX_PATH "/boot/home/pkg/tmp/.font-unix/fs"
+#define UNIX_DIR "/boot/home/pkg/tmp/.font-unix"
 #endif /* FS_t || FONT_t */
 #if defined(ICE_t)
-#define UNIX_PATH "/tmp/.ICE-unix/"
-#define UNIX_DIR "/tmp/.ICE-unix"
+#define UNIX_PATH "/boot/home/pkg/tmp/.ICE-unix/"
+#define UNIX_DIR "/boot/home/pkg/tmp/.ICE-unix"
 #endif /* ICE_t */
 #if defined(TEST_t)
-#define UNIX_PATH "/tmp/.Test-unix/test"
-#define UNIX_DIR "/tmp/.Test-unix"
+#define UNIX_PATH "/boot/home/pkg/tmp/.Test-unix/test"
+#define UNIX_DIR "/boot/home/pkg/tmp/.Test-unix"
 #endif
 #if defined(LBXPROXY_t)
-#define UNIX_PATH "/tmp/.X11-unix/X"
-#define UNIX_DIR  "/tmp/.X11-unix"
+#define UNIX_PATH "/boot/home/pkg/tmp/.X11-unix/X"
+#define UNIX_DIR  "/boot/home/pkg/tmp/.X11-unix"
 #endif
 
 
@@ -1128,8 +1128,8 @@ TRANS(SocketUNIXCreateListener) (XtransC
     sockname.sun_len = strlen(sockname.sun_path);
 #endif
 
-#if defined(BSD44SOCKETS) || defined(SUN_LEN)
-    namelen = SUN_LEN(&sockname);
+#if defined(BSD44SOCKETS) || defined(sizeof)
+    namelen = sizeof(&sockname);
 #else
     namelen = strlen(sockname.sun_path) + offsetof(struct sockaddr_un, sun_path);
 #endif
@@ -2000,9 +2000,7 @@ TRANS(SocketUNIXConnect) (XtransConnInfo
     sockname.sun_len = strlen (sockname.sun_path);
 #endif
 
-#if defined(BSD44SOCKETS) || defined(SUN_LEN)
-    namelen = SUN_LEN (&sockname);
-#else
+#if defined(BSD44SOCKETS) || defined(sizeof)
     namelen = strlen (sockname.sun_path) + offsetof(struct sockaddr_un, sun_path);
 #endif
 
