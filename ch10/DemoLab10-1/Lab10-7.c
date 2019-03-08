/* DANIELA MEJIA
   02-20-2019
   LAB 10.7 

CONDITONAL COMPILATION

    Redefine EOF as 66 (without compiler warnings)
    Use preprocessor directive(s) to:
        Only compile in "release" and only compile if _INC_STDIO is defined
        Prints the name of a MACRO and also print the integer value of that MACRO
        Use a #else 'fall through' for ease of use and safety
    Use your preprocessor directives on FOPEN_MAX, FILENAME_MAX, and EOF */



#include <stdio.h>

#define EOF 66
#define _INC_STDIO "Loser"


int main ()
{
    #if _INC_STDIO
    {
        printf("%s",_INC_STDIO);
    }
    #else
    {
        return ("fall through ");
    } 
    #endif

    return 0;

}

    