#include <stdio.h>
// programer: Daniela Mejia
// date : 02/04/2019
// project: Lab 4a
//Program getchar-putchar
//Input a single character and then print the next sequential character
//Use getchar() and putchar()
//test

int main ()
{
    int Character = 0;

    printf(" write a character whatever:    ");
    Character = getchar(); // also getc(stadin) can be use
    Character++;
    printf("next sequestial result :  ");
    putchar (Character);    // also use putc(variable, stdout)

    
    return 0;
}