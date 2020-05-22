#include <stdio.h>
#include <stdlib.h>
#include "../header/main.h"
#include "../header/display.h"

int HIGH; // Hauteur du plateau de jeu
int WIDTH; // Largeur du plateau de jeu
int PORT; // Port du serveur
const int MINPLAYER = 2; // Nombre de joueur minimum pour lancer une partie
const int MAXPLAYER = 4;// Nombre de joueur maximum pour lancer une partie
int NBPLAYER; // Nombre de joueur dans la partie
char** Array; // Grille de jeu
char* Players; // Tableau contenant les pions de chaque joueur
int line; // coordonée du dernier jeton posé
int column; // coordonée du dernier jeton posé
int tokenLeft; // nombre de cases vides restantes (pour draw)
int mainMenuChoice; // choix du menu principal
int actualPlayer; // référence le joueur actuel
int quit; // flag de ragequit
int win; // flag de victoire

void allocateArray()
{
    Array = (char**)malloc( sizeof(char*)*HIGH); // Allocation du tableau en fonction de la largeur et hauteur saisie en argv

      for(int i = 0; i < HIGH; i++)// Iterate over correct dimension
        {
        Array[i]= (char*)malloc(WIDTH);
        } 

        if(Array == NULL)
        {
            printf("[-] Error Problem with allocation of Array ! \n");
            exit(EXIT_FAILURE);
        }
    
}

void initParameters(int argc, char** argv)
{
        if(argc < 4 || argc > 5)
    {
        printf("[-] Error : usage is : ./COMP <width> <hight> <number of players>\n");
        printf("[-] Error : usage is : ./COMP <width> <hight> <number of players> <port>\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        WIDTH = atoi(argv[1]);
        HIGH = atoi(argv[2]);
        NBPLAYER = atoi(argv[3]);
        if(argc == 5)
        {   
            if (atoi(argv[4])==0)
            {
                printf("[-] Error with port number\n");
                exit(EXIT_FAILURE);
            }
            
            PORT = atoi(argv[4]);
        }

        if(NBPLAYER<MINPLAYER || NBPLAYER>MAXPLAYER)
        {
            printf("[-] Error : <number of player> should be between %d and %d\n",MINPLAYER,MAXPLAYER);
           exit(EXIT_FAILURE);
        }

        if(WIDTH==0 || HIGH==0)
        {
            printf("[-] Error : <width> and <hight>\n");
           exit(EXIT_FAILURE);
        }

    }
}

int main(int argc, char** argv){

    initParameters(argc,argv); // Vérifie et initialise les paramètres
    allocateArray(); // Alloue la grille

    free(Array); // Libère mémoire de la grille
    return EXIT_SUCCESS;
}