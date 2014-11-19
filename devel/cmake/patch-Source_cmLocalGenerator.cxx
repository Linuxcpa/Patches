$NetBSD$

--- Source/cmLocalGenerator.cxx.orig	2014-07-31 15:03:57.052953088 +0000
+++ Source/cmLocalGenerator.cxx
@@ -36,11 +36,6 @@
 
 #include <assert.h>
 
-#if defined(__HAIKU__)
-#include <FindDirectory.h>
-#include <StorageDefs.h>
-#endif
-
 cmLocalGenerator::cmLocalGenerator()
 {
   this->Makefile = 0; // moved to after set on global
@@ -357,20 +352,6 @@ void cmLocalGenerator::GenerateInstallRu
       }
     prefix = prefix_win32.c_str();
     }
-#elif defined(__HAIKU__)
-  char dir[B_PATH_NAME_LENGTH];
-  if (!prefix)
-    {
-    if (find_directory(B_SYSTEM_DIRECTORY, -1, false, dir, sizeof(dir))
-        == B_OK)
-      {
-      prefix = dir;
-      }
-    else
-      {
-      prefix = "/boot/system";
-      }
-    }
 #else
   if (!prefix)
     {
