/*
Daniela Mejia
02/25/2019
Lab Song
File I/O – fgets() “Your Song”

Save your favorite song into a text file.

Write a C program to:

    Open the file in read-only mode
    Read it line-by-line
    Print each line as it is read
    Close the file at the end
*/


#include <stdio.h>

int main ()
{   
    FILE *pFile;  // the File to call
    char song [40]; //asummed the index is 40 
    
    pFile = fopen("C:/Users/DOTlaptop/Desktop/ch12/song.txt","r");  ///Open the file in read-only mode

    if ( song != NULL)  //song is different than null so it can read 
    {
        while ( !feof(pFile))  //loop to get full lenght of song 
        {
            fgets(song, 40 , pFile);   // get the characters in the file 
            printf("%s", song);        //print the string 
        }
    }
    fclose (pFile);  // always close the file 
    
    return 0; 
}