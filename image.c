#include <SDL/SDL.h>
#include "background.h"
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>

void initbackground(image *backg)
{

   backg->img=IMG_Load("bg.jpg");
         if(backg->img==NULL)
           {
                
                return ;
           }
          backg->pos1.x=0;
          backg->pos1.y=0;
          backg->pos2.x=0;
          backg->pos2.y=0;
          backg->pos2.w=(SCREEN_W);          
          backg->pos2.h=SCREEN_H;
}

void freeimg(image X)
{
      SDL_FreeSurface(X.img);

}

void display(image x, SDL_Surface *screen)
{
      SDL_BlitSurface(x.img,NULL,screen,&x.pos1);
}




void scrolling (background *b,SDL_Rect *positionpersonage,int direction )
{

	switch(b->mouvement_personnage)
	{

		case 1:
			if ((b->camera.x<3000)&&(positionpersonage->x>=150))
                		b->camera.x=b->camera.x+50;
			if (((positionpersonage->x<150)||((b->camera.x>=3000))&&(positionpersonage->x<350)))
				positionpersonage->x=positionpersonage->x+50;

		break;
		case 2:
			if (b->camera.x>0)
                		b->camera.x=b->camera.x-50;
	    		if (((b->camera.x!=0)&&(positionpersonage->x>=150))||((b->camera.x==0)&&(positionpersonage->x>=40)))
				positionpersonage->x=positionpersonage->x-50;
		break;

	}

}

  void scrolling1 (background *b, SDL_Rect *positionpersonage1,int direction1)
{

	switch(b->mouvement_personnage1)
	{

		case 1:
			if ((b->camera1.x<3000)&&(positionpersonage1->x>=600))
                		b->camera1.x=b->camera1.x+40;
			if (((positionpersonage1->x<600)||((b->camera1.x>=3000))&&(positionpersonage1->x<800)))
				positionpersonage1->x=positionpersonage1->x+40;

		break;
		case 2:
			if (b->camera1.x>0)
                		b->camera1.x=b->camera1.x-40;
	    		if (((b->camera1.x!=0)&&(positionpersonage1->x>=600))||((b->camera1.x==0)&&(positionpersonage1->x>=490)))
				positionpersonage1->x=positionpersonage1->x-40;
		break;

	}

}


