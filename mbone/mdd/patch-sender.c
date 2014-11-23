$NetBSD$

--- sender.c.orig	2004-12-24 16:46:15.000000000 +0000
+++ sender.c
@@ -26,7 +26,7 @@
  * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
  * OF THE POSSIBILITY OF SUCH DAMAGE.
  */
-
+#include <strings.h>
 #include <stdio.h>
 #include <unistd.h>
 #include <stdlib.h>
@@ -54,18 +54,18 @@
 void
 sender(file_name, block_size, group_addr, ttl)
 	char *file_name;
-	size_t block_size;
+	int block_size;
 	in_addr_t group_addr;
 	u_char ttl;
 {
 	int fd, sd, rd;
 	struct sockaddr_in send_addr;
 	struct sockaddr_in recv_addr;
-	ssize_t readen;
+	int readen;
 	off_t offset;
 	off_t new_offset;
 	struct mdd_packet *packet;
-	size_t packet_size;
+	socklen_t packet_size;
 	struct ip_mreq m;
 	in_addr_t src_addr;
 	int water_mark;
@@ -181,7 +181,6 @@ sender(file_name, block_size, group_addr
 		exit(-1);
 	}
 	if (debug) 
-		printf("packet size: %d\n", packet_size);
 	
 	send_addr.sin_addr.s_addr = group_addr;
 	status = ST_RUNNING;
@@ -189,7 +188,7 @@ sender(file_name, block_size, group_addr
 	do {
 		struct sockaddr_in from_sin;
 		char from_str[20];
-		size_t from_salen;
+		socklen_t from_salen;
 
 		new_offset = lseek(fd, offset, SEEK_SET);
 		packet->mdd_operation = OP_DATA_DUMP;
