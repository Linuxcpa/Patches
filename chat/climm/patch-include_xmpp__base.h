$NetBSD$

--- include/xmpp_base.h.orig	2010-03-20 14:13:13.000000000 +0000
+++ include/xmpp_base.h
@@ -2,6 +2,7 @@
 #ifndef CLIMM_XMPP_BASE_H
 #define CLIMM_XMPP_BASE_H
 
+#include <stdint.h>
 #include "im_request.h"
 
 typedef enum { p_list = 1, p_active, p_default, p_show, p_set, p_edit, p_list_quiet, p_show_quiet } xmpp_priv_t;
