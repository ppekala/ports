--- src/cdogs.c.orig	2017-11-15 20:56:50 UTC
+++ src/cdogs.c
@@ -162,13 +162,7 @@ int main(int argc, char *argv[])
 		goto bail;
 	}
 
-#ifndef __EMSCRIPTEN__
-	const int sdlFlags =
-		SDL_INIT_TIMER | SDL_INIT_AUDIO | SDL_INIT_VIDEO | SDL_INIT_HAPTIC |
-		SDL_INIT_GAMECONTROLLER;
-#else
     const int sdlFlags = SDL_INIT_AUDIO | SDL_INIT_VIDEO;
-#endif
 	if (SDL_Init(sdlFlags) != 0)
 	{
 		LOG(LM_MAIN, LL_ERROR, "Could not initialise SDL: %s", SDL_GetError());
