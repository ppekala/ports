--- Source/WebCore/dom/Document.cpp.orig	2020-05-09 11:59:29 UTC
+++ Source/WebCore/dom/Document.cpp
@@ -3912,12 +3912,12 @@ static bool isValidNameNonASCII(const UChar* character
     unsigned i = 0;
 
     UChar32 c;
-    U16_NEXT(characters, i, length, c)
+    U16_NEXT(characters, i, length, c);
     if (!isValidNameStart(c))
         return false;
 
     while (i < length) {
-        U16_NEXT(characters, i, length, c)
+        U16_NEXT(characters, i, length, c);
         if (!isValidNamePart(c))
             return false;
     }
@@ -3980,7 +3980,7 @@ bool Document::parseQualifiedName(const String& qualif
     const UChar* s = qualifiedName.deprecatedCharacters();
     for (unsigned i = 0; i < length;) {
         UChar32 c;
-        U16_NEXT(s, i, length, c)
+        U16_NEXT(s, i, length, c);
         if (c == ':') {
             if (sawColon) {
                 ec = NAMESPACE_ERR;
