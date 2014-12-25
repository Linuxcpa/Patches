$NetBSD: patch-src_3rdparty_webkit_Source_JavaScriptCore_parser_JSParser.cpp,v 1.1 2013/05/09 14:07:08 joerg Exp $

--- src/3rdparty/webkit/Source/JavaScriptCore/parser/JSParser.cpp.orig	2014-04-10 18:37:11.038797312 +0000
+++ src/3rdparty/webkit/Source/JavaScriptCore/parser/JSParser.cpp
@@ -453,8 +453,8 @@ private:
         
         void copyCapturedVariablesToVector(const IdentifierSet& capturedVariables, Vector<RefPtr<StringImpl> >& vector)
         {
-            IdentifierSet::iterator end = capturedVariables.end();
-            for (IdentifierSet::iterator it = capturedVariables.begin(); it != end; ++it) {
+            IdentifierSet::const_iterator end = capturedVariables.end();
+            for (IdentifierSet::const_iterator it = capturedVariables.begin(); it != end; ++it) {
                 if (m_declaredVariables.contains(*it))
                     continue;
                 vector.append(*it);
