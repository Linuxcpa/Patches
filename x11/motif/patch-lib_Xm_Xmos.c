$NetBSD: patch-lib_Xm_Xmos.c,v 1.1 2012/11/10 17:10:11 ryoon Exp $

--- lib/Xm/Xmos.c.orig	2012-10-22 14:50:35.051642368 +0000
+++ lib/Xm/Xmos.c
@@ -26,7 +26,7 @@
 #ifdef HAVE_CONFIG_H
 #include <config.h>
 #endif
-
+#include <pwd.h>
 
 #ifdef REV_INFO
 #ifndef lint
@@ -82,6 +82,17 @@ extern int regex();
 
 #include <sys/stat.h>
 
+#if defined(__NetBSD__)
+#include <sys/param.h>
+#  if __NetBSD_Version__ >= 299001000 /* NetBSD 2.99.10 has getpw*_r*/
+#    if !defined(_POSIX_THREAD_SAFE_FUNCTIONS)
+#      define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
+#    endif
+#  else
+#    define XNO_MTSAFE_PWDAPI
+#  endif
+#endif
+
 #define X_INCLUDE_PWD_H
 #define X_INCLUDE_DIRENT_H
 #define XOS_USE_XT_LOCKING
@@ -227,7 +238,7 @@ GetQualifiedDir(String dirSpec)
 {
   int             dirSpecLen;
   _Xgetpwparams	  pwd_buf;
-  struct passwd * pwd_value;
+  struct passwd * pw;
 
   char *          userDir;
   int             userDirLen;
@@ -268,13 +279,13 @@ GetQualifiedDir(String dirSpec)
 	    } 
 	  *destPtr = '\0';
 	  
-	  pwd_value = _XGetpwnam(nameBuf, pwd_buf);
-	  if (pwd_value != NULL)
+		pw = getpwuid(geteuid());
+	  if (pw != NULL)
 	    {   
-	      userDirLen = strlen(pwd_value->pw_dir);
+	      userDirLen = strlen(pw->pw_dir);
 	      dirSpecLen = strlen(srcPtr);
 	      outputBuf = XtMalloc(userDirLen + dirSpecLen + 2);
-	      strcpy(outputBuf, pwd_value->pw_dir);
+	      strcpy(outputBuf, pw->pw_dir);
 	      strcpy(&outputBuf[userDirLen], srcPtr);
 	    } 
 	}
@@ -1014,7 +1025,7 @@ XmeGetHomeDirName(void)
 {
   uid_t uid;
   _Xgetpwparams	pwd_buf;
-  struct passwd * pwd_value;
+  struct passwd * pw;
 
   char *ptr = NULL;
   static char empty = '\0';
@@ -1026,15 +1037,15 @@ XmeGetHomeDirName(void)
       if ((ptr = (char *)getenv("HOME")) == NULL) 
 	{
 	  if ((ptr = (char *)getenv(USER_VAR)) != NULL)
-	    pwd_value = _XGetpwnam(ptr, pwd_buf);
+		pw = getpwuid(geteuid());
 	  else 
 	    {
 	      uid = getuid();
-	      pwd_value = _XGetpwuid(uid, pwd_buf);
+		pw = getpwuid(geteuid());
             }
 
-	  if (pwd_value != NULL)
-	    ptr = pwd_value->pw_dir;
+	  if (pw != NULL)
+	    ptr = pw->pw_dir;
 	  else
 	    ptr = NULL;
         }
