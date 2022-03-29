#ifndef image_H
#define image_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#define SCREEN_W 800
#define SCREEN_H 400
struct image{
     SDL_Rect pos1;
     SDL_Rect pos2;
     SDL_Surface *img;
};
typedef struct image image;

void initbackground(image *backg);
void freeimg(image x);
void display(image x,SDL_Surface *screen);




#endif
