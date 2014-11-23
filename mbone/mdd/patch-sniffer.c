$NetBSD$

--- sniffer.c.orig	2005-03-18 12:53:47.000000000 +0000
+++ sniffer.c
@@ -27,6 +27,7 @@
  * OF THE POSSIBILITY OF SUCH DAMAGE.
  */
 
+#include <strings.h>
 #include <stdio.h>
 #include <unistd.h>
 #include <stdlib.h>
@@ -136,7 +137,7 @@ sniffer(group_addr, stat)
 	while(1) {
 		struct sockaddr_in from_sin;
 		char from_str[20];
-		size_t from_salen;
+		socklen_t from_salen;
 
 		from_salen = sizeof(from_sin);
 		if (recvfrom(rd, &packet, sizeof(packet), 
@@ -163,7 +164,7 @@ sniffer(group_addr, stat)
 				}
 
 				if (ms->rcv == 0x000000) { /* not found */
-					size_t len;
+					socklen_t len;
 
 					statcount++;
 					len = sizeof(*ms) * statcount;
