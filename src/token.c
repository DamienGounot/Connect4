#include <stdio.h>
#include <stdlib.h>

extern int NBPLAYER; // Nombre de joueur dans la partie
extern char* Players; // Tableau contenant les pions de chaque joueur

int isTokenAvailable(char token){
    for(int i=0;i<NBPLAYER;i++)
    {
        if(Players[i] == token){
            printf("[DEBUG] [isTokenAvailable] Token is not OK ! \n");
            return 0; // token is not available
        }
    }
    printf("[DEBUG] [isTokenAvailable] Token is OK ! \n");
    return 1; //token is available
}

void choiceToken()
{
    int actualPlayer = 1;
    char token;
    do{
        do{
            printf("Player #%d : Choose your token\n",actualPlayer);
            scanf("%c", &token);
        }while((token <'a' || token>'z') || (!isTokenAvailable(token)));// Tant que token n'est pas une minuscule ou n'est pas déjà utilisé
        printf("Player #%d has choosen token %c\n",actualPlayer,token);
        Players[actualPlayer-1] = token;
        actualPlayer++;
    }while(actualPlayer<5);
}
        
