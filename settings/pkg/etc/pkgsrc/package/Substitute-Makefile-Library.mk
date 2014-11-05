# Substitutes library link objects from makefile that cause build failure for specific packages

.if ${PKGPATH} == "benchmarks/dnsperf"
BUILDLINK_TRANSFORM+= l:gssapi_krb5:root
BUILDLINK_TRANSFORM+= l:krb5:root 
BUILDLINK_TRANSFORM+= l:k5crypto:root 
BUILDLINK_TRANSFORM+= l:com_err:root
BUILDLINK_TRANSFORM+= l:crypto:root
.endif

