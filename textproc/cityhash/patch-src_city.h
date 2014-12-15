$NetBSD$

--- src/city.h.orig	2012-10-24 23:22:31.000000000 +0000
+++ src/city.h
@@ -67,7 +67,7 @@
 #include <utility>
 
 typedef uint8_t uint8;
-typedef uint32_t uint32;
+typedef __haiku_uint32   uint32;
 typedef uint64_t uint64;
 typedef std::pair<uint64, uint64> uint128;
 
