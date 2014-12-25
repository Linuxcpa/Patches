$NetBSD$

--- libstdc++-v3/libsupc++/tinfo.cc.orig	2013-02-03 17:54:05.060293120 +0000
+++ libstdc++-v3/libsupc++/tinfo.cc
@@ -30,6 +30,15 @@ std::type_info::
 ~type_info ()
 { }
 
+#ifdef __HAIKU__
+#ifndef __GXX_MERGED_TYPEINFO_NAMES
+#define __GXX_MERGED_TYPEINFO_NAMES 0
+#endif
+#ifndef __GXX_TYPEINFO_EQUALITY_INLINE
+#define __GXX_TYPEINFO_EQUALITY_INLINE 0
+#endif
+#endif
+
 #if !__GXX_TYPEINFO_EQUALITY_INLINE
 
 // We can't rely on common symbols being shared between shared objects.
