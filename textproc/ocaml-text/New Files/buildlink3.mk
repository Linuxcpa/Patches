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
# XXX	BUILDLINK_DEPMETHOD.ocaml-text?=	build

BUILDLINK_TREE+=	ocaml-text

.if !defined(OCAML_TEXT_BUILDLINK3_MK)
OCAML_TEXT_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.ocaml-text+=	ocaml-text>=0.6nb2
BUILDLINK_PKGSRCDIR.ocaml-text?=	../../textproc/ocaml-text

# XXX
# XXX Uncomment and keep only the buildlink3 lines below which are directly
# XXX needed for dependencies to compile, link, and run.  If this package
# XXX provides a wrappered API or otherwise does not expose the APIs of the
# XXX buildlink3 lines below to dependencies, remove them.
# XXX
#.include "../../lang/ocaml/buildlink3.mk"
.endif	# OCAML_TEXT_BUILDLINK3_MK

BUILDLINK_TREE+=	-ocaml-text
