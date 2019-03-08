/*Input an integer from the user
    Create a menu allowing the user to:
        Print their input as the following...
            Binary
            Octal
            Decimal
            Hexadecimal
        Input a new character
        Input a new number
        exit */

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main ()
{
    int User = 0;
    int Menu = 1;
    int printMenu ;

    printf("write a number: \n");
    scanf ("%d", &User);

    printf ("print number: ");
    scanf( "%d", &printMenu);

    switch (printMenu)
    {
        case 1: //binary
            User = 1
            print;
            break;
        case 2:
            printf("octal : %o\n",printMenu);
            break;
        case 3:
            printf("Decimal : %d\n", printMenu);
            break;
        case 4:
            printf("Hexadecimal : %x\n", printMenu);
            break;
        default:
            break;
}






    return 0;
}