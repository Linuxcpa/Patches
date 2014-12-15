$NetBSD$

--- pdns/dnswriter.cc.orig	2012-01-05 13:54:51.000000000 +0000
+++ pdns/dnswriter.cc
@@ -3,7 +3,7 @@
 #include "dnsparser.hh"
 #include <boost/tokenizer.hpp>
 #include <boost/algorithm/string.hpp>
-
+#include <strings.h>
 DNSPacketWriter::DNSPacketWriter(vector<uint8_t>& content, const string& qname, uint16_t  qtype, uint16_t qclass, uint8_t opcode)
   : d_pos(0), d_content(content), d_qname(qname), d_qtype(qtype), d_qclass(qclass)
 {
