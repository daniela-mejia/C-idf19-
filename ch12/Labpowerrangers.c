/*
Daniela Mejia
02/25/2019
lab powerrangers

File I/O – getc() “Mighty Morphin”

Save the lyrics for the Mighty Morphin' Power Rangers theme song into a text file.

Write a C program to:

    Open the file in read-only mode
    Read it char-by-char
    Print each char as it is read
    Close the file at the end
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fpuno;
    char uno;

    fpuno = fopen("C:/Users/DOTlaptop/Desktop/ch12/mighthymorphin.txt","r");    // Open the file in read-only mode

    while (1)
    {
        uno = fgetc(fpuno);  // gets the next character  from the specified stream and advances the position indicator for the stream.
        if ( uno != EOF)    // if varibale not at the end of the file
        {
            fputchar(uno);   // writes a character (an unsigned char) specified by the argument char to stdout.
        }
        else
        {
           break;
        }
    }
    printf(" Your file have been read");
    fclose(fpuno);
    fpuno = NULL;

    return 0;   
}
