$NetBSD$

--- SrcShared/Platform_NetLib_Sck.cpp.orig	2002-03-29 13:11:15.000000000 +0000
+++ SrcShared/Platform_NetLib_Sck.cpp
@@ -1799,7 +1799,7 @@ Bool NetLibToSocketsType (	const NetSock
 			break;
 
 		case netSocketTypeReliableMsg:
-			outType = SOCK_RDM;
+			outType = SOCK_SEQPACKET;
 			break;
 
 		default:
@@ -2966,9 +2966,9 @@ Err PrvTranslateError (uint32 err)
 			result = netErrUnknownProtocol;
 			break;
 
-		case ESOCKTNOSUPPORT:	//	44		/* Socket type not supported */
-			result = netErrWrongSocketType;
-			break;
+//		case ESOCKTNOSUPPORT:	//	44		/* Socket type not supported */
+//			result = netErrWrongSocketType;
+//			break;
 
 		case EOPNOTSUPP:		//	45		/* Operation not supported on socket */
 			result = netErrWrongSocketType;
