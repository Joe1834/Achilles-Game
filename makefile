game:background.o main.o button.o text.o music.o
	gcc background.o main.o button.o text.o music.o -o game -lSDL -lSDL_ttf -g -lSDL_image -lSDL_mixer
main.o:main.c
	gcc -c main.c -g
background.o:background.c
	gcc -c background.c -g
button.o:button.c
	gcc -c button.c -g
text.o:text.c
	gcc -c text.c -g
music.o:music.c
	gcc -c music.c -g

