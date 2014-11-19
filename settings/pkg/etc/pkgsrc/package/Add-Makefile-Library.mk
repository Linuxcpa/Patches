#Adds libraries to build process for specific packages

.if ${PKGPATH} == "devel/git-base"
BUILDLINK_TRANSFORM+= -lnetwork
.endif
