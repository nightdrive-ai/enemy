#ifndef ennemi_h
#define ennemi_h
#define ENNEMY_WIDTH 80
#define ENNEMY_HEIGHT 80
#define TIME_BETWEEN_2_FRAMES 6
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>


typedef struct ENEMY
{
    
    SDL_Surface *sprite;
    
    SDL_Rect postScreen;
SDL_Rect posSprite;
int direction ;
    
    
} Ennemi;
SDL_Surface *screen,*target;
SDL_Rect pose,posp;
void initEnnemi(Ennemi *e);
void afficherEnnemi(Ennemi e, SDL_Surface * screen);
void animerEnnemi( Ennemi * e);
void deplacer( Ennemi * e);
int collisionBB( SDL_Rect posp,  SDL_Rect pose) ;


Ennemi e;



#endif /* ennemi_h */

