#include <stdio.h>
#include <stdlib.h>

extern int NBPLAYER; // Nombre de joueur dans la partie
extern char* Players; // Tableau contenant les pions de chaque joueur
extern int actualPlayer; // référence le joueur actuel
extern int column; // coordonée du dernier jeton posé
extern int line; // coordonée du dernier jeton posé
extern int HIGH; // Hauteur du plateau de jeu
extern int WIDTH; // Largeur du plateau de jeu
extern char** Array; // Grille de jeu
extern int tokenLeft; // nombre de cases vides restantes (pour draw)

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
    do
    {
        do
        {
            printf("Player #%d : Choose your token\n",actualPlayer);
            scanf("%c", &token);
        }while((token <'a' || token>'z') || (!isTokenAvailable(token)));// Tant que token n'est pas une minuscule ou n'est pas déjà utilisé
        printf("Player #%d has choosen token %c\n",actualPlayer,token);
        Players[actualPlayer-1] = token;
        actualPlayer++;
    }while(actualPlayer<NBPLAYER+1);
}

int isColumAvailable(int column)
{
        if(Array[0][column] == ' ') // si la première case de la colonne est disponible
        {
            return 1;
        }
        else
        {
            return 0;
        }
}

void gravity()
{
        int line = HIGH;
    do
    {
        line--;
    } while (Array[line][column] != ' ');

    Array[line][column] = Players[actualPlayer];
    printf("[DEBUG] [gravity] Token end at line :%d\n",line);
    printf("[DEBUG] [gravity] column %d, line %d = %c\n",column,line,Players[actualPlayer]);
}


void placeToken()
{
    do
    {
        printf("Player #%d : Choose your column\n",actualPlayer+1);
        scanf("%d",&column);
    } while ((column<0 || column > WIDTH) || (!isColumAvailable(column))); // tant que la colonne n'existe pas, ou est pleine

    printf("[DEBUG] [placeToken] Player #%d : Choosed Column %d! \n",actualPlayer+1,column);   
}

void leftToken()
{
    tokenLeft --;
    printf("[DEBUG] [leftToken] tokenLeft : %d\n",tokenLeft); 
}
        
