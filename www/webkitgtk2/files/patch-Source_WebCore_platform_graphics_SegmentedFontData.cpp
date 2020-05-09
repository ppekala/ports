--- Source/WebCore/platform/graphics/SegmentedFontData.cpp.orig	2020-05-09 10:38:59 UTC
+++ Source/WebCore/platform/graphics/SegmentedFontData.cpp
@@ -61,7 +61,7 @@ bool SegmentedFontData::containsCharacters(const UChar
 {
     UChar32 c;
     for (int i = 0; i < length; ) {
-        U16_NEXT(characters, i, length, c)
+        U16_NEXT(characters, i, length, c);
         if (!containsCharacter(c))
             return false;
     }
