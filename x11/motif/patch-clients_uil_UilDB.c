$NetBSD: patch-clients_uil_UilDB.c,v 1.1 2012/11/10 17:10:10 ryoon Exp $

--- clients/uil/UilDB.c.orig	2012-10-22 14:50:39.030932992 +0000
+++ clients/uil/UilDB.c
@@ -66,7 +66,16 @@ static char rcsid[] = "$XConsortium: Uil
 #include <unistd.h>
 #endif
 
-
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
 
 
 #include "UilDefI.h"
@@ -888,7 +897,7 @@ String get_root_dir_name()
 {
 	int uid;
 	_Xgetpwparams pwd_buf;
-	struct passwd *pwd_value;
+	struct passwd *pw;
 	static char *ptr = NULL;
 	char *outptr;
 
@@ -898,16 +907,16 @@ String get_root_dir_name()
 	    {
 	    if((ptr = (char *)getenv(USER_VAR)) != NULL) 
 		{
-		pwd_value = _XGetpwnam(ptr, pwd_buf);
+		pw = getpwuid(geteuid());
 		}
 	    else 
 		{
 		uid = getuid();
-		pwd_value = _XGetpwuid(uid, pwd_buf);
+		pw = getpwuid(geteuid());
 		}
-	    if (pwd_value != NULL)
+	    if (pw != NULL)
 		{
-		ptr = pwd_value->pw_dir;
+		ptr = pw->pw_dir;
 		}
 	    else 
 		{
