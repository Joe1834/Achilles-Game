#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include "minimap.h"
#include <SDL/SDL_ttf.h>
int main(int argc, char* argv[])
{

 SDL_Init(SDL_INIT_VIDEO);
 SDL_Surface *screen;
 background back;
 minimap minimap,minihero;
 int done=0;
 screen=SDL_SetVideoMode(1600,600,32,SDL_HWSURFACE | SDL_DOUBLEBUF);

 if(!screen)
      {
             return 1;
      }
 initback(&back);
init_minimap(&minimap);
init_minimap(&minihero);
init_minimap(&hero);
 while(done==0){
displayback(back,screen);
blit_minimap(minimap,screen);
blit_minimap(minihero,screen);
blit_minimap(hero,screen);
SDL_Flip(screen);
  SDL_Event event;
  SDL_PollEvent(&event);
  switch (event.type)
			{
				case SDL_QUIT:
					done=1;
					break;	}
 



  }

free_minimap(back);
free_minimap(minimap);
free_minimap(minihero);
SDL_Quit();
return 0;
}


