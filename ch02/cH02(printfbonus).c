#include <stdio.h>
// This program checks how much bonus you get by doing some math prompting for an input and printing the output
int main ()
{
    float a ;
    float b ;

    printf("How much bonus did you get with cents? ");
    scanf (" %f", &a);    //ask input from the computer
 
    b = .85 * a;
    printf( " if you gave 15 percent to charity this is how much you have left %.2f. \n ", b);   // call the result to b

    return 0;
}