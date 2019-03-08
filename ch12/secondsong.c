#include <stdio.h>

int main ()
{   
    FILE *pFile;  // the File to call
    char song [40]; //asummed the index is 40 
    
    pFile = fopen("C:/Users/DOTlaptop/Desktop/ch12/song.txt","r");  ///Open the file in read-only mode

    if ( song != NULL)  //song is different than null so it can read 
    {
        while ( !feof(pFile))  //loop to get full lenght of song in not feof not at the end of the file
        {   
            c =getc(pFile);
               // get the characters in the file 
            printf("%s", c);        //print the string 
        }
    }
    fclose (pFile);  // always close the file 
    
    return 0; 
}