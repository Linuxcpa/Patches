$NetBSD: patch-pdns_dnsparser.cc,v 1.1 2013/05/09 20:06:53 joerg Exp $

--- pdns/dnsparser.cc.orig	2012-01-05 13:54:51.013893632 +0000
+++ pdns/dnsparser.cc
@@ -15,7 +15,7 @@
     along with this program; if not, write to the Free Software
     Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
-
+#include <strings.h>
 #include "dnsparser.hh"
 #include "dnswriter.hh"
 #include <boost/lexical_cast.hpp>
@@ -88,7 +88,7 @@ static const string EncodeDNSLabel(const
   return ret;  
 }  
 
-shared_ptr<DNSRecordContent> DNSRecordContent::unserialize(const string& qname, uint16_t qtype, const string& serialized)
+boost::shared_ptr<DNSRecordContent> DNSRecordContent::unserialize(const string& qname, uint16_t qtype, const string& serialized)
 {
   dnsheader dnsheader;
   memset(&dnsheader, 0, sizeof(dnsheader));
@@ -122,7 +122,7 @@ shared_ptr<DNSRecordContent> DNSRecordCo
   memcpy(&packet[pos], serialized.c_str(), serialized.size()); pos+=(uint16_t)serialized.size();
 
   MOADNSParser mdp((char*)&*packet.begin(), (unsigned int)packet.size());
-  shared_ptr<DNSRecordContent> ret= mdp.d_answers.begin()->first.d_content;
+  boost::shared_ptr<DNSRecordContent> ret= mdp.d_answers.begin()->first.d_content;
   ret->header.d_type=ret->d_qtype;
   ret->label=mdp.d_answers.begin()->first.d_label;
   ret->header.d_ttl=mdp.d_answers.begin()->first.d_ttl;
