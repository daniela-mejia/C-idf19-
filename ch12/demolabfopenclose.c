#include <stdio.h>

int main ()
{
    FILE *pFile;
    char input [81;
    
    pFile = fopen("C:/Users/DOTlaptop/Desktop/poem.txt","r")         //r -read

    if (pFile != NULL)
    {

        while(!feof(pFile))         //while the file is not at the end of the Pfile (feof= end of the file)
        {    fgets(input, 81, pFile);   //bring the size of the string an pFile name of the FILE
        printf("%s", input);       //display the string input
        }
        fclose(pFile);
    }
    
    else
    {
        //IO ERROR
        printf(" IO Error!!! try again problem with file");
        
    }
    return 0;
}