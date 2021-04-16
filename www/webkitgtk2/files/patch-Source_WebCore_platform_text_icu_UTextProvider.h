--- Source/WebCore/platform/text/icu/UTextProvider.h.orig	2021-04-16 15:52:19 UTC
+++ Source/WebCore/platform/text/icu/UTextProvider.h
@@ -31,6 +31,9 @@
 
 namespace WebCore {
 
+#define TRUE	1
+#define FALSE	0
+
 enum class UTextProviderContext {
     NoContext,
     PriorContext,
