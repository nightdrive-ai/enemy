#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
#include "enemy.h"


void initEnnemi(Ennemi *e){

e->sprite = IMG_Load("sprite.png");
    e->posSprite.x=0;
e->posSprite.y=0;
e->posSprite.w=32;
e->posSprite.h=50;
 e->direction=1;
 e->postScreen.x=0;
 e->postScreen.y=200;  


}
void afficherEnnemi(Ennemi e, SDL_Surface * screen){
 
SDL_BlitSurface(e.sprite, &e.posSprite, screen, &e.postScreen);
SDL_Delay(100);



}
void animerEnnemi( Ennemi * e){
e->posSprite.y=e->direction*e->posSprite.h;
if(e->posSprite.x==e->sprite->w-e->posSprite.w){
e->posSprite.x=0;}
else{
e->posSprite.x=e->posSprite.x+e->posSprite.w;

}



}
void deplacer( Ennemi * e){
if(e->postScreen.x>screen->w-e->posSprite.w){
e->direction=1;
}
else if(e->postScreen.x==0){
e->direction=2;



}
if(e->direction==1){
e->postScreen.x--;
pose.x=e->postScreen.x;
}
else if(e->direction==2){
e->postScreen.x++;
pose.x=e->postScreen.x;


}


}


int collisionBB( SDL_Rect posp,  SDL_Rect pose) {
int col;
if((posp.x+posp.w<pose.x)||(posp.x>pose.x+pose.w)||(posp.y+posp.h<pose.h)||(posp.y>pose.y+pose.h)){
col=0;}
else{
col=1;}
return col;





}
