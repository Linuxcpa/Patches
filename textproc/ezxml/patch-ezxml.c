$NetBSD$

--- ezxml.c.orig	2006-06-08 02:33:38.000000000 +0000
+++ ezxml.c
@@ -21,7 +21,7 @@
  * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
  * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
  */
-
+#include <sys/mman.h>
 #include <stdlib.h>
 #include <stdio.h>
 #include <stdarg.h>
@@ -633,24 +633,13 @@ ezxml_t ezxml_parse_fd(int fd)
     if (fd < 0) return NULL;
     fstat(fd, &st);
 
-#ifndef EZXML_NOMMAP
-    l = (st.st_size + sysconf(_SC_PAGESIZE) - 1) & ~(sysconf(_SC_PAGESIZE) -1);
-    if ((m = mmap(NULL, l, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0)) !=
-        MAP_FAILED) {
-        madvise(m, l, MADV_SEQUENTIAL); // optimize for sequential access
-        root = (ezxml_root_t)ezxml_parse_str(m, st.st_size);
-        madvise(m, root->len = l, MADV_NORMAL); // put it back to normal
-    }
-    else { // mmap failed, read file into memory
-#endif // EZXML_NOMMAP
         l = read(fd, m = malloc(st.st_size), st.st_size);
         root = (ezxml_root_t)ezxml_parse_str(m, l);
         root->len = -1; // so we know to free s in ezxml_free()
 #ifndef EZXML_NOMMAP
     }
 #endif // EZXML_NOMMAP
-    return &root->xml;
-}
+
 
 // a wrapper for ezxml_parse_fd that accepts a file name
 ezxml_t ezxml_parse_file(const char *file)
