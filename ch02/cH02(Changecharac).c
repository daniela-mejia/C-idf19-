/* Daniela Mejia

This code is an example on how to change all the different variables within each other using printf () function

*/

#include <stdio.h>

int main(void)
{
    //Declaration and Initialization of variables
    int integer = 5;
    float singlePrecision = 2.2;
    double doublePrecision = 3.3;
    char singleChar = '$';
    char singleChar2 = 33;


    // using Printf chamge the variables to another 
    printf( " change from %d to %c \n", integer, singleChar);
    printf( " change from %f to %d \n", singlePrecision, integer);
    printf( " change from %lf to %f \n", doublePrecision, singlePrecision);
    
    //always return 
    return 0;
}