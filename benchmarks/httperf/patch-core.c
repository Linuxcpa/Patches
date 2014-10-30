$NetBSD$

--- core.c.orig	2000-10-31 23:57:50.000000000 +0000
+++ core.c
@@ -1145,7 +1145,7 @@ core_loop (void)
 		i = min_i;
 
 	      assert (i <= max_i);
-	      mask = readable.fds_bits[i] | writable.fds_bits[i];
+	      mask = readable.bits[i] | writable.bits[i];
 	    }
 	  while (!mask);
 	  bit = 0;
