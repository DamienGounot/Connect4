#include <stdio.h>
#include <stdlib.h>

 

void logAction(char* fileName, int action){
FILE* logFile;
logFile = fopen(fileName,"a+");
    if (logFile == NULL)
    {
        printf("[-] Error : can't open logFile\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        fprintf(logFile,"%d ", action);
        fclose(logFile);
    }   
}
