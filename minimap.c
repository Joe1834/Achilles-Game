#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include "minimap.h"
#include <time.h>
#include <SDL/SDL_ttf.h>

void init_minimap(minimap* mp){

  mp->mini_map =IMG_Load("minimap.png");
 mp->pos_minimap.x = 640;
 mp->pos_minimap.y = 50;
 

 mp->mini_hero = IMG_Load("mini_perso.png");
 mp->pos_minihero.x = 640;
 mp->pos_minihero.y = 130;

}

void blit_minimap(minimap mp,SDL_Surface *screen)
{

 SDL_BlitSurface(mp.tn,NULL,screen,&mp.pos1);
 

}

void free_minimap(minimap mp)
{
SDL_FreeSurface(mp.tn);
}


