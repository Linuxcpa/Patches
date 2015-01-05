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

.if ${PKGPATH} == "x11/Xsdl"
BUILDLINK_TRANSFORM+= rm:-liconv
BUILDLINK_TRANSFORM+= rm:-ltextencoding
BUILDLINK_TRANSFORM+= rm:-ldevice
BUILDLINK_TRANSFORM+= rm:-lgame
BUILDLINK_TRANSFORM+= rm:-lmedia
BUILDLINK_TRANSFORM+= rm:-lGL
BUILDLINK_TRANSFORM+= rm:-lbe
BUILDLINK_TRANSFORM+= -lnetwork
BUILDLINK_TRANSFORM+= -lcrypto
BUILDLINK_TRANSFORM+= -lXdmp
BUILDLINK_TRANSFORM+= -lXfont
BUILDLINK_TRANSFORM+= -lXau
BUILDLINK_TRANSFORM+= -lpixman
.endif
