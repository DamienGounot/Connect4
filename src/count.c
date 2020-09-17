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
extern int HIGH; // Hauteur du plateau de jeu

void Count_Left()
{
    count_left = 0;
    for (int i = column; i > 0;)
    {
        while (Array[line][i-1] == Players[actualPlayer])
        {
            count_left++;
            i--;
        }
        break;
    }
    printf("[DEBUG] [count_left]Return value :  %d\n",count_left);
}

void Count_Right()
{
    count_right = 0;
    for (int i = column; i < HIGH;)
    {
        while (Array[line][i+1] == Players[actualPlayer])
        {
            count_right++;
            i++;
        }
        break;
    }
    printf("[DEBUG] [count_right]Return value :  %d\n",count_right);
}