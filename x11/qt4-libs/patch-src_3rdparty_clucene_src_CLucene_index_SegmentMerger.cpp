$NetBSD: patch-src_3rdparty_clucene_src_CLucene_index_SegmentMerger.cpp,v 1.1 2012/11/16 00:28:54 joerg Exp $

--- src/3rdparty/clucene/src/CLucene/index/SegmentMerger.cpp.orig	2014-04-10 18:37:12.038535168 +0000
+++ src/3rdparty/clucene/src/CLucene/index/SegmentMerger.cpp
@@ -264,7 +264,7 @@ int32_t SegmentMerger::mergeFields()
     CND_CONDITION(fieldsWriter != NULL, "Memory allocation for fieldsWriter failed");
 
     try {  
-        IndexReader* reader = NULL;
+        reader = NULL;
         int32_t maxDoc          = 0;
         //Iterate through all readers
         for (uint32_t i = 0; i < readers.size(); i++) {
