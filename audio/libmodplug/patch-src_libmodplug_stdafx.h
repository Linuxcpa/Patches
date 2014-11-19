$NetBSD$

--- src/libmodplug/stdafx.h.orig	2014-03-09 23:52:07.000000000 +0000
+++ src/libmodplug/stdafx.h
@@ -6,6 +6,7 @@
  *          Adam Goode       <adam@evdebs.org> (endian and char fixes for PPC)
  */
 
+#include <strings.h>
 #ifndef _STDAFX_H_
 #define _STDAFX_H_
 
