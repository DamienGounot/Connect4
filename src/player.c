#include <stdio.h>
#include <stdlib.h>

extern char* Players; // Tableau contenant les pions de chaque joueur
extern int actualPlayer; // référence le joueur actuel
extern int NBPLAYER; // Nombre de joueur dans la partie

void nextPlayer(int actualPlayer)
{
    printf("[DEBUG] [nextPlayer] : Player : %d",actualPlayer);
       actualPlayer =((actualPlayer+1)%NBPLAYER);
    printf("[DEBUG] [nextPlayer] : New player : %d",actualPlayer); 
}