/* Name: Daniela Mejia
   Date: 02-11-2019
   LAB 7-5 
   NESTED CONTROL FLOW */


#include <stdio.h>

int main()
{
    int x = 0; //user input
    int i = 1;
    //Prompt the user for input to indicate odds or evens.
    printf("write '1' if need Even numbers or a '0' for Odd numbers: \n"); 
    scanf("%d", &x);                                     //scan the result
    
    //Print all the even or odd numbers from 0 to 100.
    //Loop from 0 to 100 and print all indicated numbers.
    for(i = 1; i < 100; i++)   //use and IF statement to check if even or odd.
    {
        //Use and IF statement to check if even or odd
        if(x == 1 && i%2 == 0) // divide by 2 so it make your outcome even number
        {
            printf("Even #:  %d\n", i);
        }
        else if(x == 0 && i%2 != 0) //otherwise user chose odds, and gets all #s with a remainder after dividing by 2
        {
            printf("Odd #:  %d\n", i);
        }
    }
    return 0;
}