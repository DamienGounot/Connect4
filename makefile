PROJET :  COMP LAUNCH NET

count.o : count.h
	gcc -c count.c -Wall

display.o : display.h
	gcc -c display.c -Wall

log.o : log.h
	gcc -c log.c -Wall

main.o : count.h display.h log.h main.h search.h token.h
	gcc -c main.c -Wall

search.o : search.h
	gcc -c search.c -Wall

token.o : token.h
	gcc -c token.c -Wall
					


COMP : count.o display.o log.o main.o search.o token.o
	cd ./obj
	gcc -o COMP count.o display.o log.o main.o search.o token.o -Wall

LAUNCH :
	-./COMP

NET : 
	rm *.o COMP
	clear

