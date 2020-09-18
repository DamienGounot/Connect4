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
int count_above; // nombre de jetons similaires au dessus
int count_below; // nombre de jetons similaires en dessous
int count_above_right; // nombre de jetons similaires au dessus a droite
int count_below_right; // nombre de jetons similaires en dessous a droite
int count_above_left; // nombre de jetons similaires au dessus a gauche
int count_below_left; // nombre de jetons similaires en dessous a gauche

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
        count_Left();
        count_Right();
        count_Below();
        count_Below_Right();
        count_Below_Left();
        count_Above_Right();
        count_Above_Left();

    } while (!win || !quit || (tokenLeft != 0));
    
    free(Array); // Libère mémoire de la grille
    return EXIT_SUCCESS;
}