/*
DANIELA MEJIA
02-20-2019
LAB 10.6


PERFORMANCE LAB A 10.6
PREPROCESSOR DIRECTIVES
Write a C program with preprocessor directives to:

    Combine two string literals
    Wrap those string literals in quotes
    Define a constant buffer size of 64

Define an array:

    Of standard buffer size
    Assign the wrapped string literals to the array

Print the array */

#include <stdio.h>


#define BUFFERSIZE 64  //Define a constant buffer size of 64
#define INBUFF  "I do not know "
#define OTHERBUFF  "what I'm doing"
#define COMBINEBUFF  INBUFF OTHERBUFF


int main(void)
{
    printf("your string combination is : (tab)\n");

    if (INBUFF != OTHERBUFF)
    {   
        fscanf(stdin,COMBINEBUFF);   
        fprintf (stdout, " %s\n",COMBINEBUFF );
    }
    else
    {
        printf(" ERROR!!!!! I KNOW WHAT A WASTE OF TIME");
    }
    return 0;
}
