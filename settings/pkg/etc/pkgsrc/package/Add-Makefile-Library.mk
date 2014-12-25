#Adds libraries to build process for specific packages

.if ${PKGPATH} == "devel/git-base" || ${PKGPATH} == "net/modpcap"
BUILDLINK_TRANSFORM+= -lnetwork
.endif

.if ${PKGPATH} == "print/luatex"
BUILDLINK_TRANSFORM+= -lroot
.endif

#Tried the below, didn't work

#.if ${PKGPATH} == "converters/chef"
#BUILDLINK_TRANSFORM+= -lroot
#.endif
