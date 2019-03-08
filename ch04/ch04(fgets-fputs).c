#include <stdio.h>
// Programer :Daniela Mejia
// Date : 02-04-2019
// Lab 4c

// Program fgets and fputs
int main ()
{
    char character [10]; // just leave string open asssume 

    printf (" write here: ");  // try more than 10 to see difference try
                    // tryb input : Program, Class rules,<Enter>,1<tab>2<space>3456789, |$(5)$|, ~\_<Ctrl-D>_/~
    fgets (Words, sizeof (Words),stdin); // size it to the string  10 in this case 
    printf (" result: ");
    fputs (Words, stdout);   //  will give you variable output 

    return 0;

}