#include <stdio.h>
#include <stdlib.h>

extern int line; // coordonée du dernier jeton posé
extern int column; // coordonée du dernier jeton posé
extern int actualPlayer; // référence le joueur actuel
extern char** Array; // Grille de jeu
extern char* Players; // Tableau contenant les pions de chaque joueur
extern int WIDTH; // Largeur du plateau de jeu
extern int count_right; // nombre de jetons similaires a droite
extern int count_left; // nombre de jetons similaires a gauche

void Count_Left()
{
    count_left = 0;
    for (int i = column; i > 0; i--)
    {
        while (Array[line][i] == Players[actualPlayer])
        {
            count_left++;
        }
        break;
    }
    printf("[DEBUG] [count_left]Return value :  %d\n",count_left);
}

int Count_Right()
{

}