#include <stdio.h>
#include <stdlib.h>

extern int line; // coordonée du dernier jeton posé
extern int column; // coordonée du dernier jeton posé
extern int actualPlayer; // référence le joueur actuel
extern char** Array; // Grille de jeu
extern char* Players; // Tableau contenant les pions de chaque joueur
extern int WIDTH; // Largeur du plateau de jeu
extern int HIGH; // Hauteur du plateau de jeu
extern int count_right; // nombre de jetons similaires a droite
extern int count_left; // nombre de jetons similaires a gauche
extern int count_below; // nombre de jetons similaires en dessous
extern int count_above_right; // nombre de jetons similaires au dessus a droite
extern int count_below_right; // nombre de jetons similaires en dessous a droite
extern int count_above_left; // nombre de jetons similaires au dessus a gauche
extern int count_below_left; // nombre de jetons similaires en dessous a gauche
extern int HIGH; // Hauteur du plateau de jeu

void count_Left()
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
    printf("[DEBUG] [count_left] Return value :  %d\n",count_left);
}

void count_Right()
{
    count_right = 0;
    for (int i = column; i < WIDTH;)
    {
        while (Array[line][i+1] == Players[actualPlayer])
        {

            count_right++;
            i++;
        }
        break;
    }
    printf("[DEBUG] [count_right] Return value :  %d\n",count_right);
}

void count_Below()
{
    count_below = 0;
    for (int i = line; i < HIGH-1; i++)
    {
        if (Array[i+1][column] == Players[actualPlayer])
        {
            count_below++;
        }else
        {
            break;
        }
        
    }
    printf("[DEBUG] [count_below] Return value :  %d\n",count_below);
}

void count_Below_Right()
{
    count_below_right = 0;
    int i = line;
    int j = column;

        while (i<HIGH-1 && j<WIDTH-1)
        {
            if (Array[i+1][j+1] == Players[actualPlayer])
            {
                count_below_right++;
                i++;
                j++;
            }
            else
            {
                break;
            }
        }
        printf("[DEBUG] [count_below_right] Return value :  %d\n",count_below_right);
}
void count_Below_Left()
{
    count_below_left = 0;
    int i = line;
    int j = column;

        while (i<HIGH-1 && j>0)
        {
            if (Array[i+1][j-1] == Players[actualPlayer])
            {
                count_below_left++;
                i++;
                j--;
            }
            else
            {
                break;
            }
            
        }
        printf("[DEBUG] [count_below_left] Return value :  %d\n",count_below_left);
}

void count_Above_Right()
{
    count_above_right = 0;
    int i = line;
    int j = column;

        while (i > 0 && j < WIDTH-1)
        {
            if (Array[i-1][j+1] == Players[actualPlayer])
            {
                count_above_right++;
                i--;
                j++;
            }
            else
            {
                break;
            }
        }
        printf("[DEBUG] [count_above_right] Return value :  %d\n",count_above_right);
}

void count_Above_Left()
{
    count_above_left = 0;
    int i = line;
    int j = column;

        while (i > 0 && j > 0)
        {
            if (Array[i-1][j-1] == Players[actualPlayer])
            {
                count_above_left++;
                i--;
                j--;
            }
            else
            {
                break;
            }
        }
        printf("[DEBUG] [count_above_left] Return value :  %d\n",count_above_left);
}