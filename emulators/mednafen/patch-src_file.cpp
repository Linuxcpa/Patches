$NetBSD$

--- src/file.cpp.orig	2009-05-15 02:12:55.000000000 +0000
+++ src/file.cpp
@@ -14,7 +14,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  */
-
+#include <strings.h>
 #include "mednafen.h"
 #include <stdarg.h>
 #include <string.h>
@@ -216,40 +216,6 @@ static MDFNFILE *MakeMemWrap(void *tz, i
   }
   #endif
  }
- else if(type == MDFN_FILETYPE_GZIP)
- {
-  uint32_t cur_size = 0;
-  uint32_t cur_alloced = 65536;
-  int howmany;
-
-  if(!(tmp->data=(uint8*)MDFN_malloc(cur_alloced, _("file read buffer"))))
-  {
-   free(tmp);
-   tmp = NULL;
-   goto doret;
-  }
-
-  while((howmany = gzread(tz, tmp->data + cur_size, cur_alloced - cur_size)) > 0)
-  {
-   cur_size += howmany;
-   cur_alloced <<= 1;
-   if(!(tmp->data = (uint8 *)MDFN_realloc(tmp->data, cur_alloced, _("file read buffer")))) 
-   {
-    free(tmp);
-    tmp = NULL;
-    goto doret;
-   }
-  }
-
-  if(!(tmp->data = (uint8 *)MDFN_realloc(tmp->data, cur_size, _("file read buffer")))) 
-  {
-   free(tmp);
-   tmp = NULL;
-   goto doret;
-  }
-
-  tmp->size = cur_size;
- }
  else if(type == MDFN_FILETYPE_ZIP)
  {
   unz_file_info ufo; 
@@ -280,10 +246,7 @@ static MDFNFILE *MakeMemWrap(void *tz, i
  {
   fclose((FILE *)tz);
  }
- else if(type == MDFN_FILETYPE_GZIP)
- {
-  gzclose(tz);
- }
+ 
  else if(type == MDFN_FILETYPE_ZIP)
  {
   unzCloseCurrentFile(tz);
@@ -442,12 +405,6 @@ MDFNFILE * MDFN_fopen(const char *path, 
     return(0);
    }
 
-   if(!(fceufp = MakeMemWrap(t, 1)))
-   {
-    gzclose(t);
-    return(0);
-   }
-
    char *tmp_path = strdup(path);
    char *ld = strrchr(tmp_path, '.');
 
