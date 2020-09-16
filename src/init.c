#include <stdio.h>
#include <stdlib.h>


extern char** Array;
extern int HIGH;
extern int WIDTH;
extern int NBPLAYER;
extern int PORT;
extern int MINPLAYER;
extern int MAXPLAYER;
extern int NBARGUMENTS;
extern char** ARGUMENTS;
extern char* Players; 

void allocateArray()
{
    Array = (char**)malloc(sizeof(char*)*HIGH); // Allocation du tableau en fonction de la largeur et hauteur saisie en argv

      for(int i = 0; i < HIGH; i++)// Iterate over correct dimension
        {
        Array[i]= (char*)malloc(sizeof(char)*WIDTH);
        } 

        if(Array == NULL)
        {
            printf("[-] Error Problem with allocation of Array ! \n");
            exit(EXIT_FAILURE);
        }
    
}

void initParameters()
{
        if(NBARGUMENTS < 4 || NBARGUMENTS > 5)
    {
        printf("[-] Error : usage is : ./COMP <width> <hight> <number of players>\n");
        printf("[-] Error : usage is : ./COMP <width> <hight> <number of players> <port>\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        WIDTH = atoi(ARGUMENTS[1]);
        HIGH = atoi(ARGUMENTS[2]);
        NBPLAYER = atoi(ARGUMENTS[3]);
        if(NBARGUMENTS == 5)
        {   
            if (atoi(ARGUMENTS[4])==0)
            {
                printf("[-] Error with port number\n");
                exit(EXIT_FAILURE);
            }
            
            PORT = atoi(ARGUMENTS[4]);
        }

        if(NBPLAYER<MINPLAYER || NBPLAYER>MAXPLAYER)
        {
            printf("[-] Error : <number of player> should be between %d and %d\n",MINPLAYER,MAXPLAYER);
           exit(EXIT_FAILURE);
        }

        if(WIDTH==0 || HIGH==0)
        {
            printf("[-] Error : <width> and <hight>\n");
           exit(EXIT_FAILURE);
        }
    }
printf("[DEBUG] [main] : WIDTH : %d, HIGH : %d, NBPLAYER: %d, MAXPLAYER : %d, MINPLAYER : %d \n",WIDTH,HIGH,NBPLAYER,MAXPLAYER,MINPLAYER);
}

void allocatePlayers(){
Players = (char*)malloc(sizeof(char)*NBPLAYER);
}