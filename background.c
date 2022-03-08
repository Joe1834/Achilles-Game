#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include "minimap.h"
#include <time.h>
#include <SDL/SDL_ttf.h>

void initback(background *b){
 b->back = IMG_Load("background.png");
 b->pos1.x=0;
 b->pos1.y=0;
 b->pos2.x=0;
 b->pos2.y=0;
}
void displayback(background b,SDL_Surface *screen){

SDL_BlitSurface(b.back,NULL,screen,&b.pos1);

}
void free_background(background b){
SDL_FreeSurface(b.tn);
}
