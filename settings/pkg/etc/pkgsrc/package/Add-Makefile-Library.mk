#Adds libraries to build process for specific packages

.if ${PKGPATH} == "devel/git-base"
BUILDLINK_TRANSFORM+= -lnetwork
.endif

.if ${PKGPATH} == "print/luatex"
BUILDLINK_TRANSFORM+= -lroot
.endif

#.if ${PKGPATH} == "converters/chef"
#BUILDLINK_TRANSFORM+= -lroot
#.endif
