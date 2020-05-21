#include <stdio.h>
#include <stdlib.h>

int HIGH; // Hauteur du plateau de jeu
int WIDTH; // Largeur du plateau de jeu
int PORT; // Port du serveur
const int MINPLAYER = 2; // Nombre de joueur minimum pour lancer une partie
const int MAXPLAYER = 4;// Nombre de joueur maximum pour lancer une partie
int NBPLAYER; // Nombre de joueur dans la partie
char Array[WIDTH][HIGH]; // Grille de jeu
char Players[NBPLAYER]; // Tableau contenant les pions de chaque joueur
int line; // coordonée du dernier jeton posé
int column; // coordonée du dernier jeton posé
int tokenLeft; // nombre de cases vides restantes (pour draw)
int mainMenuChoice; // choix du menu principal
int actualPlayer; // référence le joueur actuel
int quit; // flag de ragequit
int win; // flag de victoire

int main(int argc, char** argv){

 



    return EXIT_SUCCESS;
}