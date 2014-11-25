$NetBSD$

--- Modules/Platform/Haiku.cmake.orig	2014-07-31 15:03:56.065798144 +0000
+++ Modules/Platform/Haiku.cmake
@@ -15,111 +15,5 @@ set(CMAKE_SHARED_LIBRARY_RPATH_LINK_C_FL
 set(CMAKE_SHARED_LIBRARY_SONAME_C_FLAG "-Wl,-soname,")
 set(CMAKE_EXE_EXPORTS_C_FLAG "-Wl,--export-dynamic")
 
-# Determine, if the C or C++ compiler is configured for a secondary
-# architecture. If so, that will change the search paths we set below. We check
-# whether the compiler's library search paths contain a
-# "/boot/system/develop/lib/<subdir>/", which we assume to be the secondary
-# architecture specific subdirectory and extract the name of the architecture
-# accordingly.
-set(__HAIKU_COMPILER ${CMAKE_C_COMPILER})
+include(Platform/UnixPaths)
 
-if(NOT __HAIKU_COMPILER)
-  set(__HAIKU_COMPILER ${CMAKE_CXX_COMPILER})
-endif()
-
-execute_process(
-  COMMAND ${__HAIKU_COMPILER} -print-search-dirs
-  OUTPUT_VARIABLE _HAIKU_SEARCH_DIRS
-  OUTPUT_STRIP_TRAILING_WHITESPACE)
-
-string(REGEX MATCH ".*\nlibraries: =?([^\n]*:)?/boot/system/develop/lib/([^/]*)/(:[^\n]*)?\n.*" _dummy "\n${_HAIKU_SEARCH_DIRS}\n")
-set(CMAKE_HAIKU_SECONDARY_ARCH "${CMAKE_MATCH_2}")
-
-if(NOT CMAKE_HAIKU_SECONDARY_ARCH)
-  set(CMAKE_HAIKU_SECONDARY_ARCH_SUBDIR "")
-  unset(CMAKE_HAIKU_SECONDARY_ARCH)
-else()
-  set(CMAKE_HAIKU_SECONDARY_ARCH_SUBDIR "/${CMAKE_HAIKU_SECONDARY_ARCH}")
-
-  # Override CMAKE_*LIBRARY_ARCHITECTURE. This will cause FIND_LIBRARY to search
-  # the libraries in the correct subdirectory first. It still isn't completely
-  # correct, since the parent directories shouldn't be searched at all. The
-  # primary architecture library might still be found, if there isn't one
-  # installed for the secondary architecture or it is installed in a less
-  # specific location.
-  set(CMAKE_LIBRARY_ARCHITECTURE ${CMAKE_HAIKU_SECONDARY_ARCH})
-  set(CMAKE_C_LIBRARY_ARCHITECTURE ${CMAKE_HAIKU_SECONDARY_ARCH})
-  set(CMAKE_CXX_LIBRARY_ARCHITECTURE ${CMAKE_HAIKU_SECONDARY_ARCH})
-endif()
-
-list(APPEND CMAKE_SYSTEM_PREFIX_PATH
-  /boot/common/non-packaged
-  /boot/common
-  /boot/system
-  )
-
-LIST(APPEND CMAKE_HAIKU_COMMON_INCLUDE_DIRECTORIES
-  /boot/common/non-packaged/develop/headers${CMAKE_HAIKU_SECONDARY_ARCH_SUBDIR}
-  /boot/common/develop/headers${CMAKE_HAIKU_SECONDARY_ARCH_SUBDIR}
-  /boot/system/develop/headers/os
-  /boot/system/develop/headers/os/app
-  /boot/system/develop/headers/os/device
-  /boot/system/develop/headers/os/drivers
-  /boot/system/develop/headers/os/game
-  /boot/system/develop/headers/os/interface
-  /boot/system/develop/headers/os/kernel
-  /boot/system/develop/headers/os/locale
-  /boot/system/develop/headers/os/mail
-  /boot/system/develop/headers/os/media
-  /boot/system/develop/headers/os/midi
-  /boot/system/develop/headers/os/midi2
-  /boot/system/develop/headers/os/net
-  /boot/system/develop/headers/os/opengl
-  /boot/system/develop/headers/os/storage
-  /boot/system/develop/headers/os/support
-  /boot/system/develop/headers/os/translation
-  /boot/system/develop/headers/os/add-ons/graphics
-  /boot/system/develop/headers/os/add-ons/input_server
-  /boot/system/develop/headers/os/add-ons/screen_saver
-  /boot/system/develop/headers/os/add-ons/tracker
-  /boot/system/develop/headers/os/be_apps/Deskbar
-  /boot/system/develop/headers/os/be_apps/NetPositive
-  /boot/system/develop/headers/os/be_apps/Tracker
-  /boot/system/develop/headers/3rdparty
-  /boot/system/develop/headers/bsd
-  /boot/system/develop/headers/glibc
-  /boot/system/develop/headers/gnu
-  /boot/system/develop/headers/posix
-  /boot/system/develop/headers${CMAKE_HAIKU_SECONDARY_ARCH_SUBDIR}
-  )
-IF (CMAKE_HAIKU_SECONDARY_ARCH)
-  LIST(APPEND CMAKE_HAIKU_COMMON_INCLUDE_DIRECTORIES
-    /boot/system/develop/headers
-    )
-ENDIF (CMAKE_HAIKU_SECONDARY_ARCH)
-
-LIST(APPEND CMAKE_HAIKU_C_INCLUDE_DIRECTORIES
-  ${CMAKE_HAIKU_COMMON_INCLUDE_DIRECTORIES}
-  )
-
-LIST(APPEND CMAKE_HAIKU_CXX_INCLUDE_DIRECTORIES
-  ${CMAKE_HAIKU_COMMON_INCLUDE_DIRECTORIES})
-
-LIST(APPEND CMAKE_SYSTEM_INCLUDE_PATH ${CMAKE_HAIKU_C_INCLUDE_DIRECTORIES})
-
-LIST(APPEND CMAKE_HAIKU_DEVELOP_LIB_DIRECTORIES
-  /boot/common/non-packaged/develop/lib${CMAKE_HAIKU_SECONDARY_ARCH_SUBDIR}
-  /boot/common/develop/lib${CMAKE_HAIKU_SECONDARY_ARCH_SUBDIR}
-  /boot/system/develop/lib${CMAKE_HAIKU_SECONDARY_ARCH_SUBDIR}
-  )
-
-LIST(APPEND CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES
-  ${CMAKE_HAIKU_DEVELOP_LIB_DIRECTORIES}
-  )
-
-LIST(APPEND CMAKE_SYSTEM_LIBRARY_PATH ${CMAKE_HAIKU_DEVELOP_LIB_DIRECTORIES})
-
-if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
-  set(CMAKE_INSTALL_PREFIX "/boot/common" CACHE PATH
-    "Install path prefix, prepended onto install directories." FORCE)
-endif()