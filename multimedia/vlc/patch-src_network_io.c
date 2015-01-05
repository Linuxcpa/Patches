$NetBSD$

--- src/network/io.c.orig	2010-05-05 16:33:52.000000000 +0000
+++ src/network/io.c
@@ -27,7 +27,6 @@
 /*****************************************************************************
  * Preamble
  *****************************************************************************/
-
 #ifdef HAVE_CONFIG_H
 # include "config.h"
 #endif
@@ -213,7 +212,7 @@ int *net_Listen (vlc_object_t *p_this, c
         switch (ptr->ai_socktype)
         {
             case SOCK_STREAM:
-            case SOCK_RDM:
+            case SOCK_RAW:
             case SOCK_SEQPACKET:
 #ifdef SOCK_DCCP
             case SOCK_DCCP:
