#Substiturs file on left with file on right for all builds

#Missing substitutions do not cause build failure.
BUILDLINK_TRANSFORM+= l:m:root
BUILDLINK_TRANSFORM+= l:pthread:root
BUILDLINK_TRANSFORM+= l:rt:root
BUILDLINK_TRANSFORM+= l:c:root
BUILDLINK_TRANSFORM+= l:dl:root
BUILDLINK_TRANSFORM+= l:bind:network
BUILDLINK_TRANSFORM+= l:nsl:network
BUILDLINK_TRANSFORM+= l:socket:network
BUILDLINK_TRANSFORM+= l:util:bsd
BUILDLINK_TRANSFORM+= l:getopt:bsd
BUILDLINK_TRANSFORM+= l:attr:gnu
