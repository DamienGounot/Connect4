#include <stdio.h>
#include <stdlib.h>
#include "../header/main.h"

int main(int argc, char** argv){

    if(argc < 4 || argc > 5)
    {
        printf("[-] Error : usage is : ./COMP <width> <hight> <number of players>\n");
        printf("[-] Error : usage is : ./COMP <width> <hight> <number of players> <port>\n");
        return EXIT_FAILURE;
    }
    else
    {
        WIDTH = atoi(argv[1]);
        HIGH = atoi(argv[2]);
        NBPLAYER = atoi(argv[3]);
        if(argc == 5)
        {   
            if (atoi(argv[4])==0)
            {
                printf("[-] Error with port number\n");
            }
            
            PORT = atoi(argv[4]);
        }

        if(NBPLAYER<MINPLAYER || NBPLAYER>MAXPLAYER)
        {
            printf("[-] Error : <number of player> should be between %d and %d",MINPLAYER,MAXPLAYER);
           return EXIT_FAILURE;
        }

        if(WIDTH==0 || HIGH==0)
        {
            printf("[-] Error : <width> and <hight>");
           return EXIT_FAILURE;
        }

       Array = (char**)malloc( sizeof(char*)*HIGH); // Allocation du tableau en fonction de la largeur et hauteur saisie en argv

        for(int i = 0; i < HIGH; i++)// Iterate over correct dimension
        {
        Array[i]= (char*)malloc(WIDTH);
        }



    }
    return EXIT_SUCCESS;
}