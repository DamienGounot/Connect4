#include <stdio.h>
#include <stdlib.h>
#include "../header/init.h"
#include "../header/display.h"
#include "../header/log.h"
#include "../header/token.h"
#include "../header/player.h"
#include "../header/count.h"

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
int actualPlayer = -1; // référence le joueur actuel
int quit = 0; // flag de ragequit
int win = 0; // flag de victoire
int NBARGUMENTS;
char** ARGUMENTS;
int count_right; // nombre de jetons similaires a droite
int count_left; // nombre de jetons similaires a gauche

int main(int argc, char** argv){
    NBARGUMENTS = argc;
    ARGUMENTS = argv;

    initParameters();
    allocateArray();
    displayMainMenu();
    initArray();
    displayArray();
    allocatePlayers();
    choiceToken();

    do
    {
        nextPlayer();
        placeToken();
        gravity();
        leftToken();
        displayArray();
        Count_Left();
    } while (!win || !quit);
    
    free(Array); // Libère mémoire de la grille
    return EXIT_SUCCESS;
}