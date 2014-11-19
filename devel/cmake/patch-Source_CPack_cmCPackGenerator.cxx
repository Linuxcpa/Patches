$NetBSD$

--- Source/CPack/cmCPackGenerator.cxx.orig	2014-07-31 15:03:56.038535168 +0000
+++ Source/CPack/cmCPackGenerator.cxx
@@ -26,10 +26,6 @@
 #include <cmsys/FStream.hxx>
 #include <algorithm>
 
-#if defined(__HAIKU__)
-#include <FindDirectory.h>
-#include <StorageDefs.h>
-#endif
 
 //----------------------------------------------------------------------
 cmCPackGenerator::cmCPackGenerator()
@@ -1234,16 +1230,6 @@ const char* cmCPackGenerator::GetInstall
   this->InstallPath += this->GetOption("CPACK_PACKAGE_NAME");
   this->InstallPath += "-";
   this->InstallPath += this->GetOption("CPACK_PACKAGE_VERSION");
-#elif defined(__HAIKU__)
-  char dir[B_PATH_NAME_LENGTH];
-  if (find_directory(B_SYSTEM_DIRECTORY, -1, false, dir, sizeof(dir)) == B_OK)
-    {
-    this->InstallPath = dir;
-    }
-  else
-    {
-    this->InstallPath = "/boot/system";
-    }
 #else
   this->InstallPath = "/usr/local/";
 #endif
