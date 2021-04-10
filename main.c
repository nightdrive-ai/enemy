#include "enemy.h"
int main(int argc,char *argv[]){
int running=1,coll;

SDL_Event event;
SDL_Init(SDL_INIT_EVERYTHING );
screen=SDL_SetVideoMode(800,600,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
initEnnemi(&e);
pose.y=200;
pose.w=e.posSprite.w;
pose.h=e.posSprite.h;
posp.x=250;
posp.y=130;
target=IMG_Load("target.png");

while(running){

while(SDL_PollEvent(&event)){
        switch(event.type)
        {
            case SDL_QUIT:
            running=0;
            break;
case SDL_KEYDOWN :
switch(event.key.keysym.sym){
case SDLK_ESCAPE :
running=0;
break;
case SDLK_p :


break;
}//key type

}//event.type

}//pollevent
SDL_BlitSurface(target, NULL, screen, &posp);
afficherEnnemi(e, screen);
animerEnnemi(&e);
deplacer(&e);
coll=collisionBB(  posp,   pose);
/*if(coll==1){
personne.vies--;
personne.score--;
if((personne.vies==0)||(personne.score<0)){
running=0;

...left for full game...

}


}*/


SDL_Flip(screen);
SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));












}//running





































return EXIT_SUCCESS;
}

