output: main.o enemy.o
	gcc main.o enemy.o -o output  -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf 
main.o:main.c
	gcc -c main.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf
enemy.o:enemy.c enemy.h
	gcc -c enemy.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf
