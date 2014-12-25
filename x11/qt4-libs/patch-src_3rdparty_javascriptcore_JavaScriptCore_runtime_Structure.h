$NetBSD: patch-src_3rdparty_javascriptcore_JavaScriptCore_runtime_Structure.h,v 1.1 2013/05/09 14:07:08 joerg Exp $

--- src/3rdparty/javascriptcore/JavaScriptCore/runtime/Structure.h.orig	2014-04-10 18:37:12.000262144 +0000
+++ src/3rdparty/javascriptcore/JavaScriptCore/runtime/Structure.h
@@ -316,8 +316,10 @@ namespace JSC {
         Structure* existingTransition = singleTransition();
         TransitionTable* transitionTable = new TransitionTable;
         setTransitionTable(transitionTable);
-        if (existingTransition)
-            add(StructureTransitionTableHash::Key(RefPtr<UString::Rep>(existingTransition->m_nameInPrevious.get()), existingTransition->m_attributesInPrevious), existingTransition, existingTransition->m_specificValueInPrevious);
+        if (existingTransition) {
+            unsigned attrPrev = existingTransition->m_attributesInPrevious;
+            add(StructureTransitionTableHash::Key(RefPtr<UString::Rep>(existingTransition->m_nameInPrevious.get()), attrPrev), existingTransition, existingTransition->m_specificValueInPrevious);
+        }
     }
 } // namespace JSC
 
