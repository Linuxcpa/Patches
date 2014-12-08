$NetBSD: patch-metacam.cc,v 1.1 2011/11/24 13:59:50 joerg Exp $

--- metacam.cc.orig	2004-08-21 17:56:53.002097152 +0000
+++ metacam.cc
@@ -19,7 +19,7 @@ along with this program; if not, write t
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 ------------------------------------------------------------------------------
 */
-
+#include <strings.h>
 #include <iostream>
 #include <fstream>
 #include <cstdio>
@@ -27,6 +27,7 @@ Foundation, Inc., 59 Temple Place - Suit
 #include <netinet/in.h>
 #include <string.h>
 #include <math.h>
+#include <cstdlib>
 
 #include <map>
 #include <vector>
