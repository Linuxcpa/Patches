$NetBSD$

--- pcap.c.orig	2013-02-21 03:51:49.021495808 +0000
+++ pcap.c
@@ -259,19 +259,7 @@ pcap_next_ex(pcap_t *p, struct pcap_pkth
 	return (p->read_op(p, 1, p->oneshot_callback, (u_char *)&s));
 }
 
-#if defined(DAG_ONLY)
-int
-pcap_findalldevs(pcap_if_t **alldevsp, char *errbuf)
-{
-	return (dag_findalldevs(alldevsp, errbuf));
-}
-
-pcap_t *
-pcap_create(const char *source, char *errbuf)
-{
-	return (dag_create(source, errbuf));
-}
-#elif defined(SEPTEL_ONLY)
+#if defined(SEPTEL_ONLY)
 int
 pcap_findalldevs(pcap_if_t **alldevsp, char *errbuf)
 {
@@ -283,12 +271,6 @@ pcap_create(const char *source, char *er
 {
 	return (septel_create(source, errbuf));
 }
-#elif defined(SNF_ONLY)
-int
-pcap_findalldevs(pcap_if_t **alldevsp, char *errbuf)
-{
-	return (snf_findalldevs(alldevsp, errbuf));
-}
 
 pcap_t *
 pcap_create(const char *source, char *errbuf)
