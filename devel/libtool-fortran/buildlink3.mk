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
# XXX	BUILDLINK_DEPMETHOD.libtool-fortran?=	build

BUILDLINK_TREE+=	libtool-fortran

.if !defined(LIBTOOL_FORTRAN_BUILDLINK3_MK)
LIBTOOL_FORTRAN_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.libtool-fortran+=	libtool-fortran>=2.4.2nb5
BUILDLINK_PKGSRCDIR.libtool-fortran?=	../../devel/libtool-fortran
.endif	# LIBTOOL_FORTRAN_BUILDLINK3_MK

BUILDLINK_TREE+=	-libtool-fortran
