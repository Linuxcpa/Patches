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
# XXX	BUILDLINK_DEPMETHOD.ed?=	build

BUILDLINK_TREE+=	ed

.if !defined(ED_BUILDLINK3_MK)
ED_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.ed+=	ed>=1.1nb2
BUILDLINK_PKGSRCDIR.ed?=	../../editors/ed
.endif	# ED_BUILDLINK3_MK

BUILDLINK_TREE+=	-ed
