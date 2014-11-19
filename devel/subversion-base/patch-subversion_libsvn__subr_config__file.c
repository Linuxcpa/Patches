$NetBSD$

--- subversion/libsvn_subr/config_file.c.orig	2014-04-08 04:01:36.000524288 +0000
+++ subversion/libsvn_subr/config_file.c
@@ -21,6 +21,7 @@
  * ====================================================================
  */
 
+#include <signal.h>
 
 
 #include <apr_lib.h>
@@ -38,11 +39,6 @@
 
 #include "svn_private_config.h"
 
-#ifdef __HAIKU__
-#  include <FindDirectory.h>
-#  include <StorageDefs.h>
-#endif
-
 /* Used to terminate lines in large multi-line string literals. */
 #define NL APR_EOL_STR
 
@@ -396,21 +392,6 @@ svn_config__sys_config_path(const char *
     *path_p = svn_dirent_join_many(pool, folder,
                                    SVN_CONFIG__SUBDIRECTORY, fname, NULL);
   }
-
-#elif defined(__HAIKU__)
-  {
-    char folder[B_PATH_NAME_LENGTH];
-
-    status_t error = find_directory(B_COMMON_SETTINGS_DIRECTORY, -1, false,
-                                    folder, sizeof(folder));
-    if (error)
-      return SVN_NO_ERROR;
-
-    *path_p = svn_dirent_join_many(pool, folder,
-                                   SVN_CONFIG__SYS_DIRECTORY, fname, NULL);
-  }
-#else  /* ! WIN32 && !__HAIKU__ */
-
   *path_p = svn_dirent_join_many(pool, SVN_CONFIG__SYS_DIRECTORY, fname, NULL);
 
 #endif /* WIN32 */
@@ -1260,21 +1241,6 @@ svn_config_get_user_config_path(const ch
     *path = svn_dirent_join_many(pool, folder,
                                  SVN_CONFIG__SUBDIRECTORY, fname, NULL);
   }
-
-#elif defined(__HAIKU__)
-  {
-    char folder[B_PATH_NAME_LENGTH];
-
-    status_t error = find_directory(B_USER_SETTINGS_DIRECTORY, -1, false,
-                                    folder, sizeof(folder));
-    if (error)
-      return SVN_NO_ERROR;
-
-    *path = svn_dirent_join_many(pool, folder,
-                                 SVN_CONFIG__USR_DIRECTORY, fname, NULL);
-  }
-#else  /* ! WIN32 && !__HAIKU__ */
-
   {
     const char *homedir = svn_user_get_homedir(pool);
     if (! homedir)
