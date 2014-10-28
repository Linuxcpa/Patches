#Global attempt to add -lnetwork to makefiles for all builds
# This should be package specific 

#SUBST_CLASSES+= libs
#SUBST_STAGE.libs= pre-build
#SUBST_MESSAGE.libs = Adding Haiku lnetwork to libraries
#SUBST_FILES.libs=Makefile
#SUBST_SED.libs=		-e '/^LFLAGS/s/$$/ -lnetwork/'
#SUBST_CLASSES+= libs2
#SUBST_STAGE.libs2= pre-build
#SUBST_MESSAGE.libs2 = Adding Haiku lnetwork to libraries
#SUBST_FILES.libs2=makefile
#SUBST_SED.libs2=		-e '/^LFLAGS/s/$$/ -lnetwork/'
