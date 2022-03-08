#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <time.h>

typedef struct{
  SDL_Surface *back;
  SDL_Rect pos1;
  SDL_Rect pos2;
}background;

void initback(background *b);
void displayback(background b,SDL_Surface *screen);
void free_background(background b);


#endif
