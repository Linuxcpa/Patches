$NetBSD$

--- nspr/pr/src/io/prmapopt.c.orig	2014-06-05 21:42:08.000000000 +0000
+++ nspr/pr/src/io/prmapopt.c
@@ -102,15 +102,15 @@ PRStatus PR_CALLBACK _PR_SocketGetSocket
             case PR_SockOpt_McastLoopback:
             {
 #ifdef WIN32 /* Winsock */
-                BOOL bool;
+                BOOL value;
 #else
-                PRUint8 bool;
+                PRUint8 value;
 #endif
-                length = sizeof(bool);
+                length = sizeof(value);
                 rv = _PR_MD_GETSOCKOPT(
-                    fd, level, name, (char*)&bool, &length);
+                    fd, level, name, (char*)&value, &length);
                 if (PR_SUCCESS == rv)
-                    data->value.mcast_loopback = (0 == bool) ? PR_FALSE : PR_TRUE;
+                    data->value.mcast_loopback = (0 == value) ? PR_FALSE : PR_TRUE;
                 break;
             }
             case PR_SockOpt_RecvBufferSize:
@@ -252,13 +252,13 @@ PRStatus PR_CALLBACK _PR_SocketSetSocket
             case PR_SockOpt_McastLoopback:
             {
 #ifdef WIN32 /* Winsock */
-                BOOL bool;
+                BOOL value;
 #else
-                PRUint8 bool;
+                PRUint8 value;
 #endif
-                bool = data->value.mcast_loopback ? 1 : 0;
+                value = data->value.mcast_loopback ? 1 : 0;
                 rv = _PR_MD_SETSOCKOPT(
-                    fd, level, name, (char*)&bool, sizeof(bool));
+                    fd, level, name, (char*)&value, sizeof(value));
                 break;
             }
             case PR_SockOpt_RecvBufferSize:
