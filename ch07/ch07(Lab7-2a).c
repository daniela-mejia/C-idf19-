/* Name: Daniela Mejia
   Date: 02/08/2019
   LAB 7.2A

IF STATEMENT
  NOTE: decimal values 32-126 represent printable ASCII characters*/

#include <stdio.h>
#include <math.h>

int main()
{
    char Array[256] = {0}; //Initialize a char array to zero.

    printf("Write a string aka something : \n");  //safely store a user-input string in the char array.
    scanf("%s", Array);


    /* Safely print the string IF the following conditions are both true:
        The first element greater than or equal to decimal value 32.
        The first element is less than decimal value 126.*/

    if ((Array[0] >= 32) && (Array [0]<=126)) 
    {
        printf("this is your character: %s \n", Array);
    }
    else
    {
            printf("Keep trying");
    }

    return 0;

}
