$NetBSD$

--- src/repmgr/repmgr_posix.c.orig	2012-05-11 17:57:54.000000000 +0000
+++ src/repmgr/repmgr_posix.c
@@ -571,11 +571,7 @@ __repmgr_wake_main_thread(env)
  * PUBLIC: int __repmgr_writev __P((socket_t, db_iovec_t *, int, size_t *));
  */
 int
-__repmgr_writev(fd, iovec, buf_count, byte_count_p)
-	socket_t fd;
-	db_iovec_t *iovec;
-	int buf_count;
-	size_t *byte_count_p;
+__repmgr_writev(socket_t fd, db_iovec_t *iovec, int buf_count, size_t *byte_count_p)
 {
 	int nw, result;
 
@@ -593,11 +589,7 @@ __repmgr_writev(fd, iovec, buf_count, by
  * PUBLIC: int __repmgr_readv __P((socket_t, db_iovec_t *, int, size_t *));
  */
 int
-__repmgr_readv(fd, iovec, buf_count, byte_count_p)
-	socket_t fd;
-	db_iovec_t *iovec;
-	int buf_count;
-	size_t *byte_count_p;
+__repmgr_readv(socket_t fd, db_iovec_t *iovec, int buf_count, size_t *byte_count_p)
 {
 	int result;
 	ssize_t nw;
