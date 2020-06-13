#include <stdio.h>
#include <stdlib.h>

extern char** Array;
extern int WIDTH;
extern int HIGH;

void initArray()
 {
        printf("[DEBUG] [initArray] WIDTH : %d; HIGH: %d\n",WIDTH,HIGH);

     for(int i=0; i<WIDTH;i++){

        for(int j =0; j<HIGH;j++){

           Array[j][i] = ' ';
        }
    }

    printf("[DEBUG] [initArray] CASES: %d\n",WIDTH*HIGH);
 }
void displayArray()
{
    for(int m =0; m<WIDTH; m++){
        printf("%d ",m);
    }
    printf(" \n");

     for(int r =0; r<2*WIDTH+1; r++){
        printf("-");
        
    }
    printf("\n");

    for(int i=0; i<HIGH;i++){

        for(int j =0; j<WIDTH;j++){

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