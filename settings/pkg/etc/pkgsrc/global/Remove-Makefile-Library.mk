#Removes library indicated for all builds

#Removal of non existant library does not cause build failure.

#BUILDLINK_TRANSFORM+=   rm:-lm
BUILDLINK_TRANSFORM+=   rm:-lpthread
BUILDLINK_TRANSFORM+=   rm:-pthread
BUILDLINK_TRANSFORM+=   rm:-lsocket
BUILDLINK_TRANSFORM+=   rm:-ldl
BUILDLINK_TRANSFORM+=   rm:-lltdl
#BUILDLINK_TRANSFORM+=   rm:-lc
#BUILDLINK_TRANSFORM+=   rm:Wno-error
#BUILDLINK_TRANSFORM+=   rm:Werror=implicit-function-declaration
#BUILDLINK_TRANSFORM+= rm:-lnetwork
