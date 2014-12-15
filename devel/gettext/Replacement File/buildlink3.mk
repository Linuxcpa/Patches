# $NetBSD$
# XXX
# XXX This file was created automatically using createbuildlink-3.16.
# XXX After this file has been verified as correct, the comment lines
# XXX beginning with "XXX" should be removed.  Please do not commit
# XXX unverified buildlink3.mk files.
# XXX
# XXX Packages that only install static libraries or headers should
# XXX include the following line:
# XXX
# XXX	BUILDLINK_DEPMETHOD.gettext?=	build

BUILDLINK_TREE+=	gettext

.if !defined(GETTEXT_BUILDLINK3_MK)
GETTEXT_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.gettext+=	gettext>=0.19.2
BUILDLINK_PKGSRCDIR.gettext?=	../../devel/gettext

# XXX
# XXX Uncomment and keep only the buildlink3 lines below which are directly
# XXX needed for dependencies to compile, link, and run.  If this package
# XXX provides a wrappered API or otherwise does not expose the APIs of the
# XXX buildlink3 lines below to dependencies, remove them.
# XXX
#.include "../../devel/gettext-lib/buildlink3.mk"
#.include "../../devel/gettext-asprintf/buildlink3.mk"
.endif	# GETTEXT_BUILDLINK3_MK

BUILDLINK_TREE+=	-gettext
