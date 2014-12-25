$NetBSD: patch-src_3rdparty_webkit_Source_JavaScriptCore_heap_MarkedSpace.h,v 1.1 2013/05/09 14:07:08 joerg Exp $

--- src/3rdparty/webkit/Source/JavaScriptCore/heap/MarkedSpace.h.orig	2014-04-10 18:37:11.040370176 +0000
+++ src/3rdparty/webkit/Source/JavaScriptCore/heap/MarkedSpace.h
@@ -92,6 +92,7 @@ namespace JSC {
         static const size_t impreciseCount = impreciseCutoff / impreciseStep - 1;
 
         typedef HashSet<MarkedBlock*>::iterator BlockIterator;
+        typedef HashSet<MarkedBlock*>::const_iterator ConstBlockIterator;
 
         struct SizeClass {
             SizeClass();
