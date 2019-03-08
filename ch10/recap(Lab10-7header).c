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

#define EOF -1

#ifndef FILENAME_MAX
#define FILENAME_MAX 256
#endif

#ifndef FOPEN_MAX
#define FOPEN_MAX 256
#endif

#include <stdio.h>

#define _INC_STDIO "Loser"
#undef  FOPEN_MAX
#define FOPEN_MAX 20
#undef FILENAME_MAX
#define FILENAME_MAX 60


int main ()
{
    if (_INC_STDIO)
    {
        printf("value of _INC_STDIO is :  %s \n", _INC_STDIO);
    }
    else
    {
        printf("_INC_STDIO need to be define\n");
    }
    
    if (EOF == 66)
    {
        printf("EOF is 66 !\n");
    }    
   
    if (FOPEN_MAX <= 20)
    {
        printf("FOPEN_MAX at total range\n");
    }
    if (FILENAME_MAX == 60)
    {
        printf("%u \n", FILENAME_MAX);   //%u is used for unsigned integers in standard library functions 
    }   
   
    return 0;

}
   

    