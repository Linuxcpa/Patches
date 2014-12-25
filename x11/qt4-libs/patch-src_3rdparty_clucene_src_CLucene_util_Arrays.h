$NetBSD: patch-src_3rdparty_clucene_src_CLucene_util_Arrays.h,v 1.1 2012/11/16 00:28:54 joerg Exp $

--- src/3rdparty/clucene/src/CLucene/util/Arrays.h.orig	2014-04-10 18:37:12.046923776 +0000
+++ src/3rdparty/clucene/src/CLucene/util/Arrays.h
@@ -151,7 +151,7 @@ CL_NS_DEF(util)
 
 			_itr1 itr1 = val1->begin();
 			_itr2 itr2 = val2->begin();
-			while ( --size >= 0 ){
+			while ( size-- > 0 ){
 				if ( !comp(*itr1,*itr2) )
 					return false;
 				itr1++;
