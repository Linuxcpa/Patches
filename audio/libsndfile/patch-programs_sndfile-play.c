$NetBSD: patch-programs_sndfile-play.c,v 1.1 2012/06/22 20:31:48 adam Exp $

--- programs/sndfile-play.c.orig	2011-03-28 05:15:31.042467328 +0000
+++ programs/sndfile-play.c
@@ -29,7 +29,7 @@
 ** OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ** ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
-
+#include <stdint.h>
 #include "sfconfig.h"
 
 #include <stdio.h>
@@ -58,7 +58,6 @@
 	#include 	<sys/soundcard.h>
 
 #elif (defined (__MACH__) && defined (__APPLE__))
-	#include <Carbon.h>
 	#include <CoreAudio/AudioHardware.h>
 
 #elif defined (HAVE_SNDIO_H)
