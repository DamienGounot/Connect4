#include <stdio.h>
#include <stdlib.h>
#include "../header/init.h"
#include "../header/display.h"
#include "../header/log.h"

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
int NBARGUMENTS;
char** ARGUMENTS;

int main(int argc, char** argv){
    NBARGUMENTS = argc;
    ARGUMENTS = argv;

    initParameters();
    printf("[DEBUG] [main] : WIDTH : %d, HIGH : %d, NBPLAYER: %d, MAXPLAYER : %d, MINPLAYER : %d \n",WIDTH,HIGH,NBPLAYER,MAXPLAYER,MINPLAYER);
    allocateArray();
    displayMainMenu();
    initArray();
    displayArray();

    free(Array); // Libère mémoire de la grille
    return EXIT_SUCCESS;
}