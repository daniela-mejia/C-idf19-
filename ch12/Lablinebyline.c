/*
Daniela Mejia
02/25/2019
lab line-by-line 

File I/O – fputs()

“Content Copy”

    Open an existing file in read mode.
    Open a new file in write mode.
    Copy the existing file into the new file line-by-line .
    Close the existing file.
    Close and open the new file in read mode.
    Print the new file line-by-line.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    FILE *fp1, *fp2;
    char c ;

    fp1 = fopen("song.txt", "r");         // Open an existing file in read mode
    fp2 = fopen("linebyline.txt", "w");    //Open a new file in write mode.
    //fp1 = fopen(" C:/Users/DOTlaptop/Desktop/ch12/song.txt", "r");         //DO NOT WRITE THE WHOLE ADDRESS
   // fp2 = fopen(" C:/Users/DOTlaptop/Desktop/ch12/linebyline.txt", "w");  

    while (1) 
    {
     c = fgetc(fp1);     ////Copy the existing file into the new file line-by-line .

     if (c != EOF)
        fputc(c, fp2);   //write into the other file 
     else
        break;
    }
    fclose (fp1);  //Close the existing files.
    fclose (fp2);
    printf ("File copied Successfully!");     //Print the new file line-by-line.
   

    return 0; 

}
