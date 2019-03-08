#include <stdio.h>
// Programer :Daniela Mejia
// Date : 02-04-2019
// Lab 4d -2
// program examples of scanf
int main ()
{
    int Num1 = 0;  //assumed max int capacity 256 
    int Num2 = 0;

    printf ("Write two integers (separated by a *):  \n");    //do not forget the (*) between numbers 
    
    scanf ("%d%*c%d", &Num1, &Num2);      // do not forget the &for your variables 

    printf("so result is: %d by %d is %d \n", Num1, Num2, (Num1*Num2));  // result of the multiplication by two integers 


    return 0;
}