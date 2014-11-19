$NetBSD$

--- tests/resolve/addrinfo-test.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ tests/resolve/addrinfo-test.c
@@ -81,7 +81,9 @@ static const char *socktypename (int t) 
     case SOCK_DGRAM: return "DGRAM";
     case SOCK_STREAM: return "STREAM";
     case SOCK_RAW: return "RAW";
-    case SOCK_RDM: return "RDM";
+    #ifdef SOCK_RDM
+    	case SOCK_RDM: return "RDM";
+    #endif
     case SOCK_SEQPACKET: return "SEQPACKET";
     }
     snprintf(buf, sizeof(buf), " %-2d", t);
