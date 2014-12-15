$NetBSD$

--- include/net-snmp/library/large_fd_set.h.orig	2014-02-20 00:36:42.000000000 +0000
+++ include/net-snmp/library/large_fd_set.h
@@ -75,15 +75,15 @@ int    netsnmp_large_fd_is_set(SOCKET fd
 /**
  * Size of a single element of the array with file descriptor bitmasks.
  *
- * According to SUSv2, this array must have the name fds_bits. See also
+ * According to SUSv2, this array must have the name bits. See also
  * <a href="http://www.opengroup.org/onlinepubs/007908775/xsh/systime.h.html">The Single UNIX Specification, Version 2, &lt;sys/time.h&gt;</a>.
  */
-#define NETSNMP_FD_MASK_SIZE sizeof(((fd_set*)0)->fds_bits[0])
+#define NETSNMP_FD_MASK_SIZE sizeof(((fd_set*)0)->bits[0])
 
-/** Number of bits in one element of the fd_set.fds_bits array. */
+/** Number of bits in one element of the fd_set.bits array. */
 #define NETSNMP_BITS_PER_FD_MASK (8 * NETSNMP_FD_MASK_SIZE)
 
-/** Number of elements needed for the fds_bits array. */
+/** Number of elements needed for the bits array. */
 #define NETSNMP_FD_SET_ELEM_COUNT(setsize) \
     (setsize + NETSNMP_BITS_PER_FD_MASK - 1) / NETSNMP_BITS_PER_FD_MASK
 
