/*
   Name: Daniela Mejia
   Date: 02/08/2019
   LAB 7.2 D

SWITCH STATEMENT

    Write a program that will evaluate a simple math formula.
    Input the formula with two integers separated by an arithmetic anyOperator from one line.
        Example: 1 + 1, (-8) - 3, 2 * (-7), (-15) / (-4)
    Use a switch statement to print the correct value using the anyOperators as cases.
    Set the default condition to an error.
    Ensure any division provides a double answer with a precision of two decimal places.

NOTE: Scan the arithmetic anyOperator as a char */

#include <stdio.h> 
#include <math.h>

int main ()
{
    int x = 0;
    int y = 0;
    char anyOperator ; 

    printf ("write and anyOperator in between to integers: \n");
    scanf("%d%c%d", &x, &anyOperator, &y);

    switch(anyOperator)
    {
        case '+':
            printf("%d + %d= %.d",x, y, (x+y));
            break;

        case '-':
            printf("%d - %d= %.d",x, y, (x-y));
            break;

        case '*':
            printf("%d * %d= %.d",x, y, (x*y));
            break;

        case '/':
            printf("%d / %d= %.d",x, y, (x/y));
            break;

      // the rest if you think you know more math than me 
        default:
            printf("Error! be less smart");
    }

    return 0;

}