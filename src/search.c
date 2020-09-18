#include <stdio.h>
#include <stdlib.h>
#include "../header/count.h"

extern int count_right; // nombre de jetons similaires a droite
extern int count_left; // nombre de jetons similaires a gauche
extern int count_above; // nombre de jetons similaires au dessus
extern int count_below; // nombre de jetons similaires en dessous
extern int count_above_right; // nombre de jetons similaires au dessus a droite
extern int count_below_right; // nombre de jetons similaires en dessous a droite
extern int count_above_left; // nombre de jetons similaires au dessus a gauche
extern int count_below_left; // nombre de jetons similaires en dessous a gauche
extern int win; // flag de victoire
extern int actualPlayer; // référence le joueur actuel


int Search_V()
{
    count_Below();
    if ((count_below + 1) >= 4)
    {
        return 1;
    }else
    {
        return 0;
    }    
}

int Search_H()
{
    count_Left();
    count_Right();
    if (((count_left + count_right) + 1) >= 4)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int Search_D1()
{
    count_Above_Left();
    count_Below_Right();
    if (((count_above_left + count_below_right) + 1) >= 4)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int Search_D2()
{
    count_Above_Right();
    count_Below_Left();   
    if (((count_above_right + count_below_left) + 1) >= 4)
    {
        return 1;
    }else
    {
        return 0;
    }    
}

void check_P4()
{
    if (Search_V() || Search_H() || Search_D1() || Search_D2())
    {
    win = 1;
    printf("\n\n========= Player : %d WIN ! =========\n",actualPlayer+1);
    }
}