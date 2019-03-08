/*

Daniela Mejia
02/25/2019
Lab Char by Char
File I/O – putc()

“/Content Copy”

    Open an existing file in read mode.
    Open a new file in write mode.
    Copy the existing file into the new file char-by-char.
    Close the existing file.
    Close and open the new file in read mode.
    Print the new file char-by-char.
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fpuno, *fpdos;
    char c;

    fpuno = fopen ("/song.txt","r");     // Open an existing file in read mode
    fpdos = fopen ("/stay.txt","w");     // Open a new file in write mode.

    while (1)
    {
        c = getc (fpuno);

        if( c != EOF)
        {
            putc(c, fpdos);
        }
        else
        {
            break;
        }

    }
    printf(" Your file has been copied");
    fclose (fpuno);   //Close and open the new file in read mode.
    fclose (fpdos);
    fopen ("stay.txt", "r"); //open the new file in read mode.
    

    return 0;
}

