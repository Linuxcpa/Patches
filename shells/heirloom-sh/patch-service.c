$NetBSD$

--- service.c.orig	2005-06-26 11:55:55.000000000 +0000
+++ service.c
@@ -286,10 +286,6 @@ execs(unsigned char *ap, register unsign
 			close(input);
 		input = chkopen(p, 0);
 
-#ifdef ACCT
-		preacct(p);	/* reset accounting */
-#endif
-
 		/*
 		 * set up new args
 		 */
@@ -614,91 +610,3 @@ split (		/* blank interpretation routine
 		gchain = (struct argnod *)((intptr_t)gchain | ARGMK);
 	}
 }
-
-#ifdef ACCT
-#include	<sys/types.h>
-#include	<sys/acct.h>
-#include 	<sys/times.h>
-
-struct acct sabuf;
-struct tms buffer;
-static clock_t before;
-static int shaccton;	/* 0 implies do not write record on exit */
-			/* 1 implies write acct record on exit */
-
-
-/*
- *	suspend accounting until turned on by preacct()
- */
-
-void 
-suspacct(void)
-{
-	shaccton = 0;
-}
-
-void
-preacct(unsigned char *cmdadr)
-{
-	if (acctnod.namval && *acctnod.namval)
-	{
-		sabuf.ac_btime = time((time_t *)0);
-		before = times(&buffer);
-		sabuf.ac_uid = getuid();
-		sabuf.ac_gid = getgid();
-		movstrn(simple(cmdadr), sabuf.ac_comm, sizeof (sabuf.ac_comm));
-		shaccton = 1;
-	}
-}
-
-
-void
-doacct(void)
-{
-	int fd;
-	clock_t after;
-
-	if (shaccton) {
-		after = times(&buffer);
-		sabuf.ac_utime = compress(buffer.tms_utime + buffer.tms_cutime);
-		sabuf.ac_stime = compress(buffer.tms_stime + buffer.tms_cstime);
-		sabuf.ac_etime = compress(after - before);
-
-		if ((fd = open((char *)acctnod.namval,
-				O_WRONLY | O_APPEND | O_CREAT, 0666)) != -1) {
-			write(fd, &sabuf, sizeof (sabuf));
-			close(fd);
-		}
-	}
-}
-
-/*
- *	Produce a pseudo-floating point representation
- *	with 3 bits base-8 exponent, 13 bits fraction
- */
-
-int
-compress(register clock_t t)
-{
-	register int exp = 0;
-	register int rund = 0;
-
-	while (t >= 8192)
-	{
-		exp++;
-		rund = t & 04;
-		t >>= 3;
-	}
-
-	if (rund)
-	{
-		t++;
-		if (t >= 8192)
-		{
-			t >>= 3;
-			exp++;
-		}
-	}
-	return ((exp << 13) + t);
-}
-#endif
