#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include "background.h"
#include "button.h"

int main(int argc, char* argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Surface *screen;
    image backg;
    int done=0;
    int selected=0;
    screen=SDL_SetVideoMode(750,500,32, SDL_HWSURFACE | SDL_DOUBLEBUF );
  
    if(!screen)
      {
             return 1;
      }
    

 initbackground(&backg);

    while(!done)
     {
          display(backg,screen);
        
          SDL_Flip(screen);
           SDL_Event event;
			SDL_PollEvent(&event);
			switch (event.type)
			{
				case SDL_QUIT:
					done=1;
					break;	
		                case SDL_KEYDOWN: 
                                        if(event.key.keysym.sym==SDLK_ESCAPE){
                                          done=1;
                                          break;
                                           }
                                        if((event.key.keysym.sym==SDLK_DOWN)&&(selected==0)||(selected==3)){
                                         
                                         
                                         SDL_Flip(screen);
                                         display(backg,screen);
                                        
                                         selected=1;
                                         break;
                                        }
                                        else if((event.key.keysym.sym==SDLK_DOWN)&&(selected==1)){
                                       
                                        displaybutton(settingsR,screen);
                                        SDL_Flip(screen);
                                         display(backg,screen);
                                        
                                        selected=2;
                                         break;
                                        }
                                       else if((event.key.keysym.sym==SDLK_DOWN)&&(selected==2)){
                                       
                                        SDL_Flip(screen);
                                         display(backg,screen);
                                        
                                        selected=3;
                                        break;
                                        }
                                
			}

      }

freeimg(backg);
SDL_Quit();
return 0;
}
