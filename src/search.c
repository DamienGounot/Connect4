#include <stdio.h>
#include <stdlib.h>

int count_right; // nombre de jetons similaires a droite
int count_left; // nombre de jetons similaires a gauche
int count_above; // nombre de jetons similaires au dessus
int count_below; // nombre de jetons similaires en dessous
int count_above_right; // nombre de jetons similaires au dessus a droite
int count_below_right; // nombre de jetons similaires en dessous a droite
int count_above_left; // nombre de jetons similaires au dessus a gauche
int count_below_left; // nombre de jetons similaires en dessous a gauche

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