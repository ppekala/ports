--- Source/WebCore/platform/text/TextCodecICU.cpp.orig	2021-04-16 16:16:22 UTC
+++ Source/WebCore/platform/text/TextCodecICU.cpp
@@ -41,6 +41,8 @@
 
 namespace WebCore {
 
+#define TRUE	1
+
 const size_t ConversionBufferSize = 16384;
 
 #if PLATFORM(IOS)
