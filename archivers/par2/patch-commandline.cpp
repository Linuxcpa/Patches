$NetBSD$

--- commandline.cpp.orig	2014-02-27 20:13:23.000000000 +0000
+++ commandline.cpp
@@ -17,6 +17,7 @@
 //  along with this program; if not, write to the Free Software
 //  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 
+#include <strings.h>
 #include "par2cmdline.h"
 
 #ifdef _MSC_VER
