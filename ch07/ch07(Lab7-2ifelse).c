/* Name: Daniela Mejia
   Date: 02/08/2019
   LAB 7.2 B
IF-ELSE STATEMENT
    
    
        INDICATE if the number is negative
        Otherwise, print the original value in binary, and use a bitwise operation to flip one bit to make it negative
    Print the binary

*/

#include <stdio.h>
#include <math.h>

int main()
{ 
    int x = 0 ; //initialize a signed int to 0.
    int bitChecker = 1;
    
    printf(" write your number here: \n");       //Input a number from the user and store it in the signed int. 
    scanf ("%d",x);
   // Determine if the number is negative or positive utilizing a bitwise operator.
    bitChecker = bitChecker << 31;

   /*  INDICATE if the number is negative
        Otherwise, print the original value in binary, and use a bitwise operation to flip one bit to make it negative
        Print the binary */

    if ((x & bitChecker) > 0)
    {           
        printf("Your number is negative write a positive one. \n");
    }
    else
    {
        /*while ((x&bitChecker)>0)
        {    
            if ((x || bitChecker) < 0)
            {           
            printf("1");
            }
            else
            {   
            printf("0");
            }
        }*/
    bitChecker = bitChecker >> 1;
    }

    printf("\n");
      
    return 0;

}
