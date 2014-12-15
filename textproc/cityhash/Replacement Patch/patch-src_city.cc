$NetBSD: patch-src_city.cc,v 1.2 2014/01/19 02:54:56 rodent Exp $

Add support for SunOS.

--- src/city.cc.orig	2013-06-17 19:45:57.043253760 +0000
+++ src/city.cc
@@ -69,6 +69,17 @@ static uint32 UNALIGNED_LOAD32(const cha
 #define bswap_64(x) bswap64(x)
 #endif
 
+#elif defined(__sun)
+#include <sys/byteorder.h>
+#define bswap_32(x) htonl(x)
+#define bswap_64(x) htonll(x)
+
+#elif defined(__FreeBSD__)
+#include <sys/endian.h>
+
+#elif defined(__HAIKU__)
+#include <endian.h>
+#include <support/ByteOrder.h>
 #else
 
 #include <byteswap.h>
@@ -217,10 +228,6 @@ uint32 CityHash32(const char *s, size_t 
     h = Rotate32(h, 19);
     h = h * 5 + 0xe6546b64;
     g ^= a4;
-    g = bswap_32(g) * 5;
-    h += a4 * 5;
-    h = bswap_32(h);
-    f += a0;
     PERMUTE3(f, h, g);
     s += 20;
   } while (--iters != 0);
@@ -336,11 +343,8 @@ static uint64 HashLen33to64(const char *
   uint64 h = Fetch64(s + len - 16) * mul;
   uint64 u = Rotate(a + g, 43) + (Rotate(b, 30) + c) * 9;
   uint64 v = ((a + g) ^ d) + f + 1;
-  uint64 w = bswap_64((u + v) * mul) + h;
   uint64 x = Rotate(e + f, 42) + c;
-  uint64 y = (bswap_64((v + w) * mul) + g) * mul;
   uint64 z = e + f + c;
-  a = bswap_64((x + z) * mul + y) + b;
   b = ShiftMix((z + a) * mul + d + h) * mul;
   return b + x;
 }
