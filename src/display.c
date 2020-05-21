#include "../header/display.h"
#include "../header/main.h"
#include <stdio.h>
#include <stdlib.h>

void initArray(char **Array)
 {
     for(int i=0; i<WIDTH;i++){

        for(int j =0; j<HIGH;j++){

           Array[i][j] = ' ';
        }
    }
 }
void displayArray(char **Array)
{
    for(int m =0; m<WIDTH; m++){
        printf(" %d",m);
    }
    printf(" \n");

     for(int r =0; r<13; r++){
        printf("-");
        
    }
    printf("\n");

    for(int i=0; i<WIDTH;i++){

        for(int j =0; j<HIGH;j++){

           printf("|%c", Array[i][j]);
        }
        printf("|\n");
    }
}

void displayMainMenu()
{
    printf("=====WELCOME TO THE POWER 4=====\n");
    printf("\t1<--New Game-- \n");
    printf("\t2<--Load Game-- \n ");
    printf("\t3<--Quit-- \n\n ");
}

int MainMenu()
{ 
    int choice = 0;
    do
    {
        scanf("%d", &choice);

    }while(choice <1 || choice>3);

    return choice;
}