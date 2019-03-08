/*
IF statement:

    Initialize a char array to zero.
    Safely store a user-input string in the char array.
    Safely print the string IF the first element is not equal to zero (array897[0] != 0). */

#include <stdio.h>

int main ()
{
    char Age [256] ={0};
    
        
    printf(" How old are you: \n");
    scanf("255%s \n", Age);

    if (Age [0] != 0)
    {
        printf("%s", Age);
    }

    return 0;
}