# Substitutes library link objects from makefile that cause build failure for specific packages

.if ${PKGPATH} == "benchmarks/dnsperf"
BUILDLINK_TRANSFORM+= l:gssapi_krb5:root
BUILDLINK_TRANSFORM+= l:krb5:root 
BUILDLINK_TRANSFORM+= l:k5crypto:root 
BUILDLINK_TRANSFORM+= l:com_err:root
BUILDLINK_TRANSFORM+= l:crypto:root
.endif

.if ${PKGPATH} == "net/3proxy"
BUILDLINK_TRANSFORM+= l:pthread:network
BUILDLINK_TRANSFORM+= l:krb5:root 
BUILDLINK_TRANSFORM+= l:k5crypto:root 
BUILDLINK_TRANSFORM+= l:com_err:root
BUILDLINK_TRANSFORM+= l:crypto:root
.endif

#.if ${PKGPATH} == "emulators/wine"
#BUILDLINK_TRANSFORM+= LD_LIBRARY_PATH:LIBRARY_PATH
#.endif
