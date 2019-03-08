#include <stdio.h>
// Programer :Daniela Mejia
// Date : 02-04-2019
// Lab 4b

int main (void)
{
    int writeWord = 0;

    printf(" write something: ");
    writeWord = getc (stdin); // also can use getchar()
    printf (" result:   ");
    putc(writeWord, stdout); // also can use putchar()

    return 0;

}