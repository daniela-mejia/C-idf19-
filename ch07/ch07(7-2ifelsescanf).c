/* IF-ELSE statement:
    Input a number from the user.
    Determine if the number is odd or even utilizing the "mod" operator (N00b-tier efficiency).
    Utilizing an IF-ELSE statement:
        If the number is odd, multiply the number by 2, store the result in the original variable, and print the new number.
        If the number is even SAY SO!!
    BONUS: Determine if the number is odd or even utilizing a bitwise operator instead (god-tier efficiency). */
    
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
     
int main ()
{
    int x = 0;

    printf(" write a positive number: \n");
    scanf ("%d", &x);

    if (x & 2 == 2)
    {   
            x = x * 2;
            printf(" you are lucky your number is odd but new number %d \n", x);
        }
        else
        {
            printf(" your number is even \n");
        }
        
        return 0;
    }

