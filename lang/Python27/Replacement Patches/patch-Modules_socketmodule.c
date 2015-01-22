$NetBSD: patch-Modules_socketmodule.c,v 1.4 2014/07/17 15:26:49 ryoon Exp $

--- Modules/socketmodule.c.orig	2014-05-31 18:58:40.000524288 +0000
+++ Modules/socketmodule.c
@@ -244,7 +244,7 @@ shutdown(how) -- shut down traffic in on
 /* Irix 6.5 fails to define this variable at all. This is needed
    for both GCC and SGI's compiler. I'd say that the SGI headers
    are just busted. Same thing for Solaris. */
-#if (defined(__sgi) || defined(sun)) && !defined(INET_ADDRSTRLEN)
+#if (defined(__sgi) || defined(sun) || defined(_SCO_DS)) && !defined(INET_ADDRSTRLEN)
 #define INET_ADDRSTRLEN 16
 #endif
 
@@ -4868,7 +4868,9 @@ init_socket(void)
 #ifndef __BEOS__
 /* We have incomplete socket support. */
     PyModule_AddIntConstant(m, "SOCK_RAW", SOCK_RAW);
+#ifndef __HAIKU__
     PyModule_AddIntConstant(m, "SOCK_SEQPACKET", SOCK_SEQPACKET);
+#endif
 #if defined(SOCK_RDM)
     PyModule_AddIntConstant(m, "SOCK_RDM", SOCK_RDM);
 #endif
