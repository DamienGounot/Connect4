#include <stdio.h>
#include <stdlib.h>

int HIGH; // Hauteur du plateau de jeu
int WIDTH; // Largeur du plateau de jeu
int PORT; // Port du serveur
const int MINPLAYER = 2; // Nombre de joueur minimum pour lancer une partie
const int MAXPLAYER = 4;// Nombre de joueur maximum pour lancer une partie
int NBPLAYER; // Nombre de joueur dans la partie
//char Array[WIDTH][HIGH]; // Grille de jeu
//char Players[NBPLAYER]; // Tableau contenant les pions de chaque joueur
int line; // coordonée du dernier jeton posé
int column; // coordonée du dernier jeton posé
int tokenLeft; // nombre de cases vides restantes (pour draw)
int mainMenuChoice; // choix du menu principal
int actualPlayer; // référence le joueur actuel
int quit; // flag de ragequit
int win; // flag de victoire

int main(int argc, char** argv){

    if(argc < 4 || argc > 5)
    {
        printf("[-] Error : usage is : ./COMP <width> <hight> <number of players>\n");
        printf("[-] Error : usage is : ./COMP <width> <hight> <number of players> <port>\n");
        return EXIT_FAILURE;
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
            }
            
            PORT = atoi(argv[4]);
        //    printf("Port : %d",PORT);
        }

        if(NBPLAYER<MINPLAYER || NBPLAYER>MAXPLAYER)
        {
            printf("[-] Error : <number of player> should be between %d and %d",MINPLAYER,MAXPLAYER);
           return EXIT_FAILURE;
        }

        if(WIDTH==0 || HIGH==0)
        {
            printf("[-] Error : <width> and <hight>");
           return EXIT_FAILURE;
        }

       // printf("WIDTH : %d",WIDTH);
       // printf("HIGH : %d",HIGH);
       // printf("NBPLAYER : %d",NBPLAYER);
        
    }



    return EXIT_SUCCESS;
}