PROJET :  COMP LAUNCH

count.o : 
	gcc -c ./src/count.c -Wall -o ./obj/count.o

display.o : 
	gcc -c ./src/display.c -Wall -o ./obj/display.o

log.o : 
	gcc -c ./src/log.c -Wall -o ./obj/log.o

search.o : 
	gcc -c ./src/search.c -Wall -o ./obj/search.o

token.o : 
	gcc -c ./src/token.c -Wall -o ./obj/token.o
					
main.o : 
	gcc -c ./src/main.c -Wall -o ./obj/main.o

init.o :
	gcc -c ./src/init.c -Wall -o ./obj/init.o
	
player.o :
	gcc -c ./src/player.c -Wall -o ./obj/player.o

COMP : count.o display.o log.o search.o token.o main.o init.o player.o
	gcc -o COMP ./obj/count.o ./obj/display.o ./obj/log.o ./obj/search.o ./obj/token.o ./obj/main.o ./obj/init.o ./obj/player.o

NETTOYAGE : 
	rm ./obj/*.o

LAUNCH :
	-./COMP 10 10 4

