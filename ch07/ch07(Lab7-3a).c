/*
    Initialize ONLY three int variables to 0.
    Safely scan user input into variables #1 and #2 utilizing a single line.
    Using a single ELSE-IF statement:
        If variable #1 is equal to variable #2, assign 0 to variable #3.
        Otherwise, subtract the smallest from the largest (i.e. 3-2, 42-(-45), (-11)-(-1337), etc...) and assign the result to variable #3.
    Print the value of variable #3 if it is positive otherwise print and ERROR. */
    
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main ()
{
    int Num1, Num2, Num3 = 0;
    

    printf(" write  two valiables with a tab : \n");
    scanf("%d %d ", &Num1, &Num2);

    while (Num1 == Num2)
    {
        printf(" %d is 0 \n", Num3);
    
        if ( Num1 > Num2)
        {
            printf("%d =%d-%d \n", Num3, Num1, Num2);
        }
        else if (Num1<Num2)
        {
            printf("%d = %d-%d \n", Num3, Num2, Num1);
        }
        else 
        {
            (Num3 < 0);
            printf("ERROR DO IT AGAIN \n");
        }
  
    }     
   
    
    
    return 0;

 }