# Removes library link objects from makefile that cause build failure for specific packages

.if ${PKGPATH} == "archivers/unrar" || ${PKGPATH} == "net/3proxy"
BUILDLINK_TRANSFORM+= rm:-pthread
.endif

.if ${PKGPATH} == "devel/libexecinfo"
BUILDLINK_TRANSFORM+= rm:-lm
.endif

.if ${PKGPATH} == "sysutils/adtool"
BUILDLINK_TRANSFORM+= rm:-lresolv
.endif

.if ${PKGPATH} == "www/mini_httpd"
BUILDLINK_TRANSFORM+= rm:-lcrypt
.endif

#Not working below here

#.if ${PKGPATH} == "converters/chef"
#BUILDLINK_TRANSFORM+= rm:-ll
#.endif
