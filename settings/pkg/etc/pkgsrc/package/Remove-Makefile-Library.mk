# Removes library link objects from makefile that cause build failure for specific packages

.if ${PKGPATH} == "archivers/unrar" || ${PKGPATH} == "net/3proxy"
BUILDLINK_TRANSFORM+= rm:-pthread
.endif

.if ${PKGPATH} == "devel/libexecinfo"
BUILDLINK_TRANSFORM+= rm:-lm
.endif
