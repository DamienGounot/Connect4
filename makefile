PROJET :  COMP  NETTOYAGE

count.o : ./header/count.h ./header/main.h
	gcc -c ./src/count.c -Wall -o ./obj/count.o

display.o : ./header/display.h ./header/main.h
	gcc -c ./src/display.c -Wall -o ./obj/display.o

log.o : ./header/log.h ./header/main.h
	gcc -c ./src/log.c -Wall -o ./obj/log.o

search.o : ./header/search.h ./header/main.h
	gcc -c ./src/search.c -Wall -o ./obj/search.o

token.o : ./header/token.h ./header/main.h
	gcc -c ./src/token.c -Wall -o ./obj/token.o
					
main.o : ./header/count.h ./header/display.h ./header/log.h ./header/search.h ./header/token.h ./header/main.h
	gcc -c ./src/main.c -Wall -o ./obj/main.o

COMP : count.o display.o log.o main.o search.o token.o
	gcc -o COMP ./obj/count.o ./obj/display.o ./obj/log.o ./obj/main.o ./obj/search.o ./obj/token.o -Wall

NETTOYAGE : 
	rm ./obj/*.o

LAUNCH :
	-./COMP 10 10 4

